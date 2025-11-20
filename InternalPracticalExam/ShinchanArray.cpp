/*Shinchan Array
Shinchan has an array A with N elements (assume 1-based indexing). All the elements in each array are unique *positive integers with the number of odd-value integers equal to the number of even-valued integers.

Shinchan a good array has following properties: Odd elements are in sorted order. Even elements are in sorted order. Odd elements occupy odd position.Even elements occupy even positions.

Input Format

-- first line contains the length of the array.

-- second line contains the elements of the array.

Constraints

-

Output Format

-- the number of min swaps needed to convert the array into a good array.

Sample Input 0

4
2 3 1 4
Sample Output 0

2
*/

#include <bits/stdc++.h>
using namespace std;

bool isEven(int x)
{
    return x % 2 == 0;
}

int shinchanArray(vector<int> &a)
{
    int n = a.size();

    vector<int> odds, evens;
    for (int x : a)
    {
        if (isEven(x))
            evens.push_back(x);
        else
            odds.push_back(x);
    }

    sort(odds.begin(), odds.end());
    sort(evens.begin(), evens.end());

    vector<int> target(n);
    int oi = 0, ei = 0;
    for (int i = 0; i < n; i++)
    {
        if (!isEven(i + 1))
        {
            target[i] = odds[oi];
            oi++;
        }
        else
        {
            target[i] = evens[ei];
            ei++;
        }
    }

    int swaps = 0;

    vector<bool> visited(n, false);
    unordered_map<int, int> pos;

    for (int i = 0; i < n; i++)
        pos[target[i]] = i;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] || pos[a[i]] == i)
            continue;
        int cycle = 0;
        int j = i;
        while (!visited[j])
        {
            visited[j] = true;
            j = pos[a[j]];
            cycle++;
        }
        if (cycle > 1)
            swaps += (cycle - 1);
    }
    return swaps;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << shinchanArray(a);
    return 0;
}