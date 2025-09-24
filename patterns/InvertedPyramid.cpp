#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n - 1; i >= 0; i--)
    {
        /*this will print rows - i - 1 space
        Example: for rows = 5, and i = 4, this will print 5 - 4 - 1 = 0 spaces which is exactly what we want*/
        for (int j = n - i - 1; j > 0; j--)
            cout << "  ";
        // We need 2i + 1 stars in the loop
        for (int j = 2 * i + 1; j > 0; j--)
            cout << "* ";
        cout << endl;
    }
    return 0;
}