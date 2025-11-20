/*Christmas Tree Pattern
We divide the problem into 3 parts: 1. Full triangle 2. Partial Triangle 3. Stand

Input Format

Number of levels including stand
Constraints

-

Output Format

Pattern
Sample Input 0

3
Sample Output 0

   *
  ***
 *****
*******
  ***
 *****
   *
   *
Sample Input 1

4
Sample Output 1

    *
   ***
  *****
 *******
*********
   ***
  *****
 *******
   ***
  *****
    *
    *
*/

#include <iostream>
using namespace std;

void print_christmas_tree(int n)
{
    int max_width = 2 * (n + 1) - 1;

    for (int i = 0; i <= n; i++)
    {
        int stars = 2 * i + 1;
        int spaces = (max_width - stars) / 2;

        for (int j = 0; j < spaces; j++)
            cout << ' ';
        for (int j = 0; j < stars; j++)
            cout << '*';
        cout << endl;
    }

    for (int t = 0; t < n - 2; t++)
    {
        int rows = n - 1 - t;
        for (int i = 1; i <= rows; i++)
        {
            int stars = 2 * i + 1;
            int spaces = (max_width - stars) / 2;

            for (int j = 0; j < spaces; j++)
                cout << ' ';
            for (int j = 0; j < stars; j++)
                cout << '*';
            cout << endl;
        }
    }

    int spaces = (max_width - 1) / 2;
    for (int j = 0; j < spaces; j++)
        cout << ' ';
    cout << '*' << endl;
    for (int j = 0; j < spaces; j++)
        cout << ' ';
    cout << '*' << endl;
}

int main()
{
    int n;
    cin >> n;
    print_christmas_tree(n);
    return 0;
}