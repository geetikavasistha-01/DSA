#include <iostream>
#include <vector>
using namespace std;

void insertionSortRecursive(vector<int>& arr, int n) {
    // Base case
    if (n <= 1) return;

    // Sort first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert last element into sorted subarray
    int last = arr[n - 1];
    int j = n - 2;

    // Shift elements greater than last
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    // Insert the element
    arr[j + 1] = last;
}

int main() {
    vector<int> arr = {5, 2, 4, 6};
    insertionSortRecursive(arr, arr.size());

    for (int x : arr) cout << x << " ";
}
