/*Non Attacking Queens
You are given an integer N which represents the size of an N×N chessboard. Your task is to count the number of ways to place two queens on this chessboard such that they do not attack each other.

In chess, a queen can attack another piece if they are in the same row, column, or diagonal.

Input Format

A single integer N

Constraints

-

Output Format

A single integer, the number of ways to place two queens on an N×N chessboard such that they do not attack each other.

Sample Input 0

3
Sample Output 0

8
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << 0 << endl;
        return 0;
    }

    int result = n * (n - 1) * (n - 2) * (3 * n - 1) / 6;

    cout << result << endl;

    return 0;
}