#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

pair<int, int> highestLowestFrequencyElement(const vector<int>& arr) {
    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int num : arr) {
        freq[num]++;
    }

    int max_freq = 0, min_freq = INT_MAX;
    int max_freq_element = -1, min_freq_element = -1;

    // Find elements with max and min frequency
    for (auto &p : freq) {
        int element = p.first;
        int count = p.second;
        if (count > max_freq) {
            max_freq = count;
            max_freq_element = element;
        }
        if (count < min_freq) {
            min_freq = count;
            min_freq_element = element;
        }
    }

    return {max_freq_element, min_freq_element};
}

int main() {
    vector<int> arr = {1, 3, 2, 2, 1, 3, 3, 4};

    pair<int,int> result = highestLowestFrequencyElement(arr);

    cout << "Highest frequency element: " << result.first << "\n";
    cout << "Lowest frequency element: " << result.second << "\n";

    return 0;
}
