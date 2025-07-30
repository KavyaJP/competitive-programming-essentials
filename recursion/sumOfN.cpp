// Use recursion for finding the sum of first n natural numbers.

#include <iostream>
using namespace std;

int sum(int n)
{
    // When n is 1, it will return 1 because 1 is the first natural number
    if (n == 1)
        return 1;
    // else we will return n = sum(n-1) so that the current number is added with the number that is previous of that number
    return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << sum(n);
}