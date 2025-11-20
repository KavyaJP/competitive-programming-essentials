/*Permutation of a given string

Given a string S, the task is to write a program to print all permutations of a given string.

A permutation also called an “arrangement number” or “order,” is a rearrangement of the elements of an ordered list S into a one-to-one correspondence with S itself. A string of length N has N! permutations.

Input Format

integer N and a string of length N.

Constraints

-

Output Format

all permutations of given string

Sample Input 0

3
ABC

Sample Output 0

ABC
ACB
BAC
BCA
CBA
CAB
*/

#include <iostream>
#include <string>
using namespace std;

void permute(string data, int start, int end)
{
    if (start == end)
        cout << data << endl;
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap(data[start], data[i]);
            permute(data, start + 1, end);
            swap(data[start], data[i]);
        }
    }
}

int main()
{
    string str;
    int n;
    cin >> n;
    cin >> str;
    permute(str, 0, n - 1);
    return 0;
}