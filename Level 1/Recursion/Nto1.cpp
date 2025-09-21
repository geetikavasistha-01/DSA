#include<iostream>
using namespace std;

class Solution {
  public:
    void printNumbers( int n) {
       if (n==0) return;
       cout << n << " ";
       printNumbers(n-1);  
    }
};
int main()
{
    Solution sol;
    sol.printNumbers(10);
    return 0;
}
