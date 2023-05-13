#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define all(c) c.begin(), c.end()

// Event with props
struct event {
    // x-coord
    ll x;
    // Starting and ending x-coords
    ll from, to;
    // Start or the end of an event (1 or -1 respectively)
    int type;
};

// Segment tree with nodes
struct segtree {

    // Node inside of the tree
    struct node {
        // Amount of segments that cover a particular range in the segment tree
        int cnt = 0;
        // Weights sum in particular node (the range of node), actually weights of children.
        // It will store information about covered surface
        ll sum = 0;
    };

    // Size of input weights vector
    int n;

    // Stores prefix sum of the weights. Iow, we store sum of weights of each node
    vector<ll> pref;
    // Stores nodes
    vector<node> nodes;

    // Structure constructor, init n value and nodes and pref sizes
    segtree(vector<ll> const &weights) : n(weights.size()), nodes(4 * n), pref(n + 1) {
        for (int i = 0; i < n; i++) pref[i + 1] = pref[i] + weights[i];
    }

    // Segment tree node updating based on the given range and value
    /*
    * @param i Index of cur node.
    * @param l and r Range that cur node covers.
    * @param sub_L and sub_R Subrange to update to update.
    * @param d Amount of rectangles covering zone.
    */
    void update(int i, int l, int r, int sub_L, int sub_R, int d) {
        // When we got out of the boundaries and haven't found any range to update, we stop
        if (sub_R <= l || sub_L >= r) return;
        // When we completely within the range for update we update the nodes
        if (sub_L <= l && sub_R >= r) {
            // Add value of covering rectangles to count
            nodes[i].cnt += d;
            // If it's not empty, the sum of nodes weights which are inside of the range assigned to 
            // the i-th node
            if (nodes[i].cnt) nodes[i].sum = pref[r] - pref[l];
            // Because of the recursive function below, we take the sum of children of current node
            else nodes[i].sum = r - l > 1 ? nodes[2 * i + 1].sum + nodes[2 * i + 2].sum : 0;
            return;
        }
        int m = (l + r) / 2;
        // In-depth going, we're taking left child of each node, going down
        update(2 * i + 1, l, m, sub_L, sub_R, d);
        // And the right child
        update(2 * i + 2, m, r, sub_L, sub_R, d);
        if (!nodes[i].cnt)
            nodes[i].sum = nodes[2 * i + 1].sum + nodes[2 * i + 2].sum;
    }

};

void foo() {

    int k, n;
    cin >> k >> n;

    unordered_map<char, pair<ll, ll>> const move{
            {'N', {0,  1}},
            {'S', {0,  -1}},
            {'W', {-1, 0}},
            {'E', {1,  0}}
    };

    ll x = 0, y = 0;
    vector<pair<ll, ll>> pos{{x, y}};
    // All the top and bottom edges of rects
    vector<ll> ypos{x, k};

    for (int i = 0; i < n; i++) {
        char d;
        int a;
        cin >> d >> a;

        auto dir = move.at(d);
        x += dir.first * a;
        y += dir.second * a;

        ypos.push_back(y);
        ypos.push_back(y + k);
        pos.emplace_back(x, y);
    }

    // Remove duplicates
    sort(all(ypos));
    ypos.resize(unique(all(ypos)) - ypos.begin());

    // Enumerate y values like an ordered tree
    map<ll, int> ymap;
    for (int i = 0; i < ypos.size(); i++)
        ymap[ypos[i]] = i;

    // Weights for each node
    vector<ll> weights(ypos.size() - 1);
    for (int i = 1; i < ypos.size(); i++)
        weights[i - 1] = ypos[i] - ypos[i - 1];

    vector<event> events;

    // For all rectangles
    for (int i = 0; i < n; i++) {
        // Calculate the leftmost and rightmost x coords of cur action
        ll l = min(pos[i].first, pos[i + 1].first), r = max(pos[i].first, pos[i + 1].first) + k;
        // The same for top and bottom
        ll d = min(pos[i].second, pos[i + 1].second), u = max(pos[i].second, pos[i + 1].second) + k;
        
        ll from = ymap[d], to = ymap[u];
        // Create two event objects
        events.push_back(event{l, from, to, 1});
        events.push_back(event{r, from, to, -1});
    }

    // Compare two events and place them in ascending order
    sort(all(events), [](event const &e1, event const &e2) {
        return e1.x < e2.x;
    });

    ll answer = 0, last_x = 0;
    segtree st(weights);
    for (auto &e : events) {
        answer += (e.x - last_x) * st.nodes[0].sum;
        st.update(0, 0, weights.size(), e.from, e.to, e.type);
        last_x = e.x;
    }
    cout << answer << '\n';
}

int main() {

    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
    foo();
    return 0;

}