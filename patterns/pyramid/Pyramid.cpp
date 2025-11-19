#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    cout << "Stars: " << endl;
    for (int i = 0; i < n; i++)
    {
        /*We use n - i - 1, so that we can give that many spaces to make, the same as right alligned pyramid*/
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        /*Now this is different than right alligned so that we can print 2i+1 stars, becuase we need to print 1,3,5,7,stars*/
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;

    cout << "Number: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << j + 1 << " ";
        cout << endl;
    }
    cout << endl;

    cout << "Alphabets: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << char(j + 65) << " ";
        cout << endl;
    }
}