// The same as merge sort manual, but we use <algorithm>. Though we still sort it
// with recursion, we use std::merge to merge the code

#include <iostream>

using namespace std;

void mergeSort(int arr[], int l, int r) {

    if (l >= r) return;
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Inplace_merge for instant merging
    inplace_merge(arr + l, arr + m + 1, arr + r + 1);
}

void foo() {
    int i;
    cin >> i;

    int arr[i];

    int m = i/2;        // Middle
    int l = 0;          // Left
    int r = i - 1;      // Right

    while (i--) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    mergeSort(arr, l, r);

    // Reverse ordered sort
    // reverse(arr, arr + sizeof(arr) / sizeof(int));

    for (auto x: arr) cout << x << "\t";
    cout << "\n";
}