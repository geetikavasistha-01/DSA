#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if (sol.isPalindrome(s))
        cout << "\"" << s << "\" is a palindrome.\n";
    else
        cout << "\"" << s << "\" is not a palindrome.\n";
    return 0;
}