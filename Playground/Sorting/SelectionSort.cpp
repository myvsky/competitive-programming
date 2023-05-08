// It's actually very similar to bubble sort and has O(n^2) time complexity.
// Idea is select minimum (or maximum) element in array each 

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

    for (int i = 0; i < sizeof(arr) / sizeof(int) - 1; i++)
        for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++)
            // Reverse sorting
            // if (arr[i] < arr[j]) swap(arr[i], arr[j]);
            // Ordered sorting
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);

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