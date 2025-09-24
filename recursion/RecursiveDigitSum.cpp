#include <bits/stdc++.h>
using namespace std;

int powerSum(int X, int N, int num)
{
    int p = pow(num, N);
    if (p > X)
        return 0; // too big, can't use this number
    if (p == X)
        return 1; // exact match → one valid way

    // Either include `num` in the sum or skip it
    return powerSum(X - p, N, num + 1) // include `num`
           + powerSum(X, N, num + 1);  // skip `num`
}

int main()
{
    int X, N;
    cin >> X >> N;
    cout << powerSum(X, N, 1) << endl;
}
