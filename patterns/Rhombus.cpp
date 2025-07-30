#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;

    cout << "Inverted:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < n; j++)
            cout << "* ";
        cout << endl;
    }
}