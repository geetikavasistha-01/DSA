#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, r;
    int sum = 0, digits = 0;
    cout << "Enter number: ";
    cin >> n;
    
    temp = n;
    // Count digits
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    
    temp = n;
    // Sum of digits raised to power digits
    while (temp > 0) {
        r = temp % 10;
        sum += round(pow(r, digits));
        temp /= 10;
    }
    
    if (sum == n) {
        cout << "Armstrong\n";
    } else {
        cout << "Not Armstrong\n";
    }
    return 0;
}
