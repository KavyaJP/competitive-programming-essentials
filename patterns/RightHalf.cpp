#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Pattern 1: Star
     *
     * *
     * * *
     * * * *
     * * * * *
     */

    int n;
    cout << "Enter number of Rows: ";
    cin >> n;
    cout << "Star: " << endl;
    for (int i = 0; i < n; i++)
    {
        /* We need to print i + 1 number of stars so we use j <= i so that the number of times the loop runs is i + 1*/
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;

    /* Pattern 2: Numbers 1
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

    cout << "Numbers 1: " << endl;
    for (int i = 0; i < n; i++)
    {
        /*if we directly print j, it will be 0 then 0 1 then 0 1 2 etc, so that's why we use j + 1 to print the numbers*/
        for (int j = 0; j <= i; j++)
            cout << j + 1 << " ";
        cout << endl;
    }
    cout << endl;

    /* Pattern 3: Numbers 2
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */

    cout << "Numbers 2: " << endl;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        /*We use x as an outer variable so that each row has the same integer printed*/
        for (int j = 0; j <= i; j++)
            cout << x + i << " ";
        cout << endl;
    }
    cout << endl;

    /* Pattern 4: Alphabets 1
    A
    A B
    A B C
    A B C D
    A B C D E
    */

    char c = 'A';
    cout << "Alphabets 1: " << endl;
    for (int i = 0; i < n; i++)
    {
        c = 'A';
        /*for each j, c will be printed and will be incremented to the next alphabet*/
        for (int j = 0; j <= i; j++)
        {
            cout << c << ' ';
            c++;
        }
        cout << endl;
    }
    cout << endl;

    /* Pattern 5: Alphabets 2
    A
    B B
    C C C
    D D D D
    E E E E E
    */

    c = 'A';
    cout << "Alphabets 2: " << endl;
    for (int i = 0; i < n; i++)
    {
        /*We declare a character outside the loop and then it will print character + i
        - For example: if i = 0 then it will print A + 0 = A
                     - if i = 1 then it will print A + 1 = B */
        for (int j = 0; j <= i; j++)
            cout << char(c + i) << ' ';
        cout << endl;
    }
}