#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    cout << "Stars: " << endl;
    for (int i = 0; i < n; i++)
    {
        // We run this loop to print the spaces in it
        for (int j = 0; j < i; j++)
            cout << "  ";
        // We run this loop to print the stars
        for (int j = 0; j < n - i; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;

    cout << "Numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "  ";
        for (int j = 0; j < n - i; j++)
            cout << j + 1 << " ";
        cout << endl;
    }
    cout << endl;

    cout << "Alphabets: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "  ";
        for (int j = 0; j < n - i; j++)
            cout << char(j + 65) << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}