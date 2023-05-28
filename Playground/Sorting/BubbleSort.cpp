#include <iostream>

using namespace std;

void foo() {
    int i;
    cin >> i;

    int arr[i];

    while (i--) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    // Bubble sort has time complexity of O(n^2)
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        for (int j = 0; j < sizeof(arr) / sizeof(int) - 1; j++)
            // Reverse ordered sort
            // if (arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
            // Ordered sort
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);

    for (auto x: arr) cout << x << "\t";
    cout << "\n";
}