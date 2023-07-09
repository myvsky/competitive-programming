#include <bits/stdc++.h>

using namespace std;

int digSum(string s) {
    reverse(s.begin(), s.end());
    int sum = 0, greatest = 0;
    for (char c: s) {
        int digVal = pow(10, c-'A');
        greatest > digVal ? sum -= digVal: sum += digVal;
        greatest = max(greatest, digVal);
    }
    return sum;
}

void foo() {
    string s;
    cin >> s;

    int max_sum = -1e9;
    for (char i: "ABCDE") {
        for (char j: "ABCDE") {

            int idx = s.find(i),
            ridx = s.rfind(i);
            if (idx == s.npos) continue;

            string new_s = s,
            rnew_s = s;

            new_s[idx] = rnew_s[ridx] = j;

            max_sum = max({max_sum, digSum(new_s), digSum(rnew_s)});
        }
    }
    cout << max_sum << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}