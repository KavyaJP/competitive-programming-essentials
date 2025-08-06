#include <iostream>
using namespace std;

void permute(string s, int l, int r)
{
    // Base case: if left index equals right index, print the permutation
    // which means we have a complete permutation
    if (l == r)
        cout << "{" << s << "}" << endl;
    // Recursive case: swap each character with the leftmost character
    // and recursively call permute for the next character
    else
    {
        // Loop through the string from the left index to the right index
        // swapping characters to generate permutations
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);     // swap the current character with the leftmost character
            permute(s, l + 1, r); // recursively call permute for the next character
            swap(s[l], s[i]);     // After returning from the recursive call, swap back to backtrack
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