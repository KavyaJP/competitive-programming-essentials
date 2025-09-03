#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << 0 << endl;
        return 0;
    }

    int result = n * (n - 1) * (n - 2) * (3 * n - 1) / 6;

    cout << result << endl;

    return 0;
}