#include <iostream>

using namespace std;

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

    make_heap(arr, arr + n);
    sort_heap(arr, arr + n);

    // Reverse order
    // reverse(arr, arr + n);
    for (auto x: arr) cout << x << "\t";
    cout << "\n";
}