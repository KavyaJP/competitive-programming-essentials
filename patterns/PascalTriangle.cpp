#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    int ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans = ans * (n - i) / (i + 1);
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << nCr(i + 1, j + 1) << " ";
        cout << endl;
    }
    return 0;
}