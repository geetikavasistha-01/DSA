#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 3, 4, 1, 3, 2, 4, 4};
    
    unordered_map<int, int> freq;
    
    // Count frequency of each element
    for (int num : arr) {
        freq[num]++;
    }
    
    // Print frequency of each element
    cout << "Element frequencies:\n";
    for (auto &p : freq) {
        cout << p.first << " -> " << p.second << "\n";
    }
    
    return 0;
}
