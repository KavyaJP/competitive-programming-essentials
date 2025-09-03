/* Find the number of trailing zeros in the factorial of a number n.
Constraint: 1 <= n <= 10^9 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n;

    // Prompt user to enter a number
    cout << "Enter a Number: ";
    cin >> n;

    // If the number is less than 5, its factorial has no trailing zeros
    if (n < 5)
    {
        cout << "The number of trailing zeros in " << n << "! is 0" << endl;
        return 0;
    }

    int ans = 0;

    // Count the number of times 5, 25, 125, ... divide n
    // This counts the number of trailing zeros in n!
    // Each multiple of 5 contributes at least one 5 factor
    // Each multiple of 25 contributes an extra, and so on
    for (int i = 1; n >= pow(5, i); i++)
    {
        ans += n / pow(5, i);
    }

    // Output the result
    cout << "The number of Trailing Zeros in " << n << "! is " << ans << endl;
    return 0;
}
