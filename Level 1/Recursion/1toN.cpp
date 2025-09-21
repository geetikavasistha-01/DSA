#include<iostream>
using namespace std;

class Solution {
  public:
    void printNumbers(int i, int n) {
       if (i>n) return;
       cout << i << " ";
       printNumbers(i + 1, n);  
    }
};
int main()
{
    Solution sol;
    sol.printNumbers(1,10);
    return 0;
}
