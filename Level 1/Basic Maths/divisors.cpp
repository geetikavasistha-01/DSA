#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors of " << n << " are: ";

    int i = 1;
    while (i * i <= n) {
        if (n % i == 0) {
            cout << i << " ";
            if (n / i != i) {
                cout << n / i << " ";
            }
        }
        i++;
    }

    cout << endl;
    return 0;
}
