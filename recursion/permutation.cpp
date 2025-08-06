#include <iostream>
using namespace std;

void permute(string s, int l, int r)
{
    if (l == r)
        cout << "{" << s << "}" << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permute(s, l + 1, r);
            swap(s[l], s[i]); // backtrack
        }
    }
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Permutations of the string are: " << endl;
    permute(input, 0, input.length() - 1);
    return 0;
}