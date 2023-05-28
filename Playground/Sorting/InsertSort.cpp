#include <iostream>

using namespace std;

void foo() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    // O(n*k) time complexity
    for (int k = 1; k < n; k++)
        for (int i = k; i > 0 && arr[i - 1] < arr[i]; i--)
            // Reverse ordered sort
            // Ordered sort
            swap(arr[i], arr[i-1]);

    for (auto x: arr) cout << x << "\t";
    cout << "\n";
}