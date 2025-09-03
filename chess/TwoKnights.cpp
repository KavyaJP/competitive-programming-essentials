#include <iostream>
using namespace std;

long calculateWays(int k)
{
    // Total ways to place 2 knights (unordered pairs)
    long totalWays = (long)k * k * (k * k - 1) / 2;

    // Number of ways 2 knights attack each other
    long attackWays = 4 * (k - 1) * (k - 2);

    // Subtract attacking positions to get valid configurations
    return totalWays - attackWays;
}

int main()
{
    int k;
    cout << "Enter the value of k (number of rows/columns): ";
    cin >> k;

    if (k < 2)
    {
        cout << "Invalid input. k must be at least 2." << endl;
        return 1;
    }

    long result = calculateWays(k);
    cout << "The number of ways to place two knights on a " << k << "x" << k << " chessboard without attacking each other is: " << result << endl;

    return 0;
}