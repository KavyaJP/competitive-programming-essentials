#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;
    cout << "Star:" << endl;
    for (int i = 0; i < n; i++)
    {
        /* n - i - 1 is used for no.of spaces
        Explaination:
        - for example if n = 5, we need 4 spaces is in 0th row and the 5th one will be a star
        - so n = 5, i = 0, and to get the result 4, we do 5 - 0 - 1 ==> n - i - 1
        And the Logic below is used to simply print the number of stars which is explained in RightHalf.cpp */
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;

    cout << "Number 1: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << j + 1 << " ";
        cout << endl;
    }

    cout << "Numbers 2: " << endl;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << x + i << " ";
        cout << endl;
    }
    cout << endl;

    char c = 'A';
    cout << "Alphabets 1: " << endl;
    for (int i = 0; i < n; i++)
    {
        c = 'A';
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
        {
            cout << c << ' ';
            c++;
        }
        cout << endl;
    }
    cout << endl;

    c = 'A';
    cout << "Alphabets 2: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << char(c + i) << ' ';
        cout << endl;
    }
    return 0;
}