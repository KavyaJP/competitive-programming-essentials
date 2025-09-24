// Check if a string is pallindrome or not using recursion

#include <iostream>
using namespace std;

bool check(string s, int low, int high)
{
    if (s[low] != s[high])
        return false;
    if (low >= high)
        return true;
    // cout << "is pallindrome for " << low << " " << high << endl;
    return true && check(s, low + 1, high - 1);
}

bool isPallindrome(string s)
{
    return check(s, 0, s.size() - 1);
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << isPallindrome(s);
}