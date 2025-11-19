#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int half = n / 2;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < half; j++)
        {
            if (j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        for (int j = half; j < n; j++)
        {
            if (j == n - i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        for (int j = n - 1; j > half; j--)
        {
            if (j == n - i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        for (int j = half; j >= 0; j--)
        {
            if (j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}