// Print subsets of a set. input is a string.
#include <bits/stdc++.h>
using namespace std;

// Function to generate all subsets using recursion
void generateSubsets(string str, int index, string current)
{
    // Base case: if we've processed all characters
    if (index == str.length())
    {
        if (current.empty())
        {
            cout << "{ } (empty subset)" << endl;
        }
        else
        {
            cout << "{" << current << "}" << endl;
        }
        return;
    }

    // Recursive case 1: exclude the current character
    generateSubsets(str, index + 1, current);

    // Recursive case 2: include the current character
    generateSubsets(str, index + 1, current + str[index]);
}

int main()
{
    string input;

    cout << "Enter a string: ";
    cin >> input;
    cout << "Subsets of the string are:" << endl;
    generateSubsets(input, 0, "");

    return 0;
}