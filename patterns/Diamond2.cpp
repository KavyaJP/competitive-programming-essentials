#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "* ";
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - i - 1; j > 0; j--)
            cout << "  ";
        for (int j = 2 * i + 1; j > 0; j--)
            cout << "* ";
        if (i == 0)
            continue;
        cout << endl;
    }
}