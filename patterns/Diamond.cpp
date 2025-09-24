#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;
    // Top of the diamond pyramid
    for (int i = 0; i < n; i++)
    {
        // single space instead of double space so that it can make a top diamond pyramid, becuase otherwise it would make a right allinged
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        // We print "* " so that we can make more space than the spaces used in the above inner loop
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    // Bottom of the Diamond pyramid
    for (int i = n - 1; i > 0; i--)
    {
        // this is the reverse of top of the pyramid and we make 1 less iteration so that it makes less row because that's how the pattern is
        for (int j = n - i; j > 0; j--)
            cout << " ";
        for (int j = i; j > 0; j--)
            cout << "* ";
        cout << endl;
    }
    return 0;
}