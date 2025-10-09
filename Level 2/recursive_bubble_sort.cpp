#include <iostream>
#include <vector>
using namespace std;

void bubbleSortRecursive(vector<int>& arr, int n) {
    // Base case
    if (n == 1) return;

    // One pass of bubble sort
    bool swapped = false;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            swapped = true;
        }
    }

    // Optimization: stop if no swaps occurred
    if (!swapped) return;

    // Recursive call
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};
    bubbleSortRecursive(arr, arr.size());
    for (int x : arr) cout << x << " ";
    return 0;
}


