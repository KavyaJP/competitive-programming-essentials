#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    if (n <= 0)
        return 0;
    return sumOfDigits(n / 10) + n % 10;
}

int main()
{
    int n;

    cout << "Enter a Number: ";
    cin >> n;

    cout << "Sum of digits of number " << n << " is " << sumOfDigits(n);
}