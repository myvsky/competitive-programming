#include <iostream>

using namespace std;

/**
 * Performs sift-down operation to maintain heap property
 * 
 * @param arr array representing heap
 * @param root index of root element of subtree to sift down
 * @param n size of heap
 */
void sift_down(int* arr, int root, int n) {
    // Root element is current parent
    int parent = root;
    // While parent element has at least one child, we go through  loop
    while (2 * parent <= n) {
        // Determine index of  child with  maximum value
        int child = 2 * parent;
        // If  right child exists and has a greater value than  left child,
        //  index of  right child is selected.
        if (child + 1 <= n && arr[child + 1] > arr[child]) {
            child++;
        }
        // If value of child is greater than value of parent, 
        // they are swapped, and current parent is updated to index of
        // child
        if (arr[child] > arr[parent]) {
            swap(arr[child], arr[parent]);
            parent = child;
        }
        else break;
    }
}

/**
 * Builds a max heap from an array
 * 
 * @param arr array to build heap from
 * @param n size of array
 */
void build_heap(int* arr, int n) {
    // Iterate over parent of last element
    for (int i = n / 2; i >= 1; i--) {
        sift_down(arr, i, n);
    }
}

void foo() {
    int n;
    cin >> n;

    int arr[n];

    // Read array
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    // Copy array to a heap
    int* t = new int[n + 1];
    copy(arr, arr + n, t + 1);
    build_heap(t, n);

    for (int i = 1; i <= n; i++) {
        // Put  minimum element in t[n + 1 - i]
        swap(t[1], t[n + 1 - i]);
        sift_down(t, 1, n - i);
    }
    // Reverse ordered heap sort
    // reverse(t + 1, t + n + 1);
    // Copy sorted elements to array and delete heap
    copy(t + 1, t + n + 1, arr);
    delete[] t;

    for (auto x: arr) cout << x << "\t";
    cout << "\n";
}

int main() {

    int T;

    // Testcase files
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);

    cin >> T;

    while (T--) foo();

    return 0;
}