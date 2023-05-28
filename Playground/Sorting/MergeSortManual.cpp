// Manual implementation (without using STL)

#include <iostream>

using namespace std;

void mergeSort(int arr[], int l, int r) {

    // Recursion stop trigger
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge part

    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void foo() {
    int i;
    cin >> i;

    int arr[i];

    int m = i/2;    // Middle
    int l = 0;      // Left
    int r = i - 1;  // Right

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