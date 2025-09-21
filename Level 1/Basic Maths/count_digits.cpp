#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1;

    int count = 0;
    n = abs(n);  // handle negative numbers

    while (n > 0) {
        n /= 10;
        count++;
    }

    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digitCount = countDigits(num);
    cout << "Number of digits: " << digitCount << endl;

    return 0;
}
