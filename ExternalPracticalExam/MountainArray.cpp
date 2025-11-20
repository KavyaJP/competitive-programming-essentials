/*Finding Mountain Array

A mountain array is an array of length at least 3 where elements strictly increase from the beginning up to an index i, and then strictly decrease from index i to the last element. More formally, for an array arr[]:

There exists an index i (where 1 <= i <= n-2),
The elements before index i are strictly increasing: arr[0] < arr[1] < ... < arr[i].
The elements after index i are strictly decreasing: arr[i] > arr[i+1] > ... > arr[n-1].
You need to determine if the given array satisfies the conditions of a mountain array.

Input Format

The first line contains a single integer n (3 ≤ n ≤ 10^5), the number of elements in the array arr[].
The second line contains n space-separated integers arr[0], arr[1], ..., arr[n-1] where 1 ≤ arr[i] ≤ 10^9.

Constraints

The array must have at least 3 elements. You are allowed to perform a linear scan through the array (i.e., O(n) time complexity).

Output Format

Print true if the array is a mountain array, otherwise print false.

Sample Input 0

5
4 4 3 2 1
Sample Output 0

false
Explanation 0

The array does not form a valid mountain array because the elements do not strictly increase at the beginning.

Sample Input 1

9
1 2 3 4 9 8 7 6 5
Sample Output 1

true
Explanation 1

The array increases from index 0 to index 3 and then decreases from index 3 to the end. This satisfies the conditions of a mountain array.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> inc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[i + 1])
        {
            inc[i] = true;
        }
        else if (a[i] > a[i + 1])
        {
            inc[i] = false;
        }
        else if (a[i] == a[i + 1])
        {
            cout << "false";
            return 0;
        }
    }
    int dec_index = -1;
    for (int i = 0; i < n; i++)
    {
        if (!inc[i])
        {
            dec_index = i;
            break;
        }
    }
    for (int i = dec_index; i < n; i++)
    {
        if (inc[i])
            cout << "false";
    }
    cout << "true";
    return 0;
}
