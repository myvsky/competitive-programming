#include <iostream>
#include <algorithm>

using namespace std;

void sift_down(int* arr, int root, int n) {
    int parent = root;
    while (2 * parent <= n) {
        int child = 2 * parent;
        if (child + 1 <= n && arr[child + 1] > arr[child]) {
            child++;
        }
        if (arr[child] > arr[parent]) {
            swap(arr[child], arr[parent]);
            parent = child;
        } else {
            break;
        }
    }
}

void build_heap(int* arr, int n) {
    for (int i = n / 2; i >= 1; i--) {
        sift_down(arr, i, n);
    }
}

void foo() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = n - 1; i >= 0; i--) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    // Copy array in heap
    int* t = new int[n + 1];
    std::copy(arr, arr + n, t + 1);
    build_heap(t, n);
    for (int i = 1; i <= n; i++) {
        // Remove the minima
        std::swap(t[1], t[n + 1 - i]);
        sift_down(t, 1, n - i);
    }
    // Reverse ordered heap sort
    // reverse(t + 1, t + n + 1);
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