/*Difficult Homework

James is attending math classes. On each day, the teacher gives him homework. Yesterday, the teacher gave James a sequence of positive integers and asked him to find the maximum product of two different elements of this sequence. This homework was easy for James, since he knew that he should select the biggest two numbers.

However, today, the homework is a little bit different. Again, James has a sequence of positive integers A1, A2,..., Ay, but he should find two different elements of this sequence such that the sum of digits (in base 10) of their product is maximum possible.

Help him by finding the correct answer - the maximum possible sum of digits of a product of two different elements of the sequence A.

Input Format

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of the input contains a single integer N.
The second line contains N space-separated integers A1, A2,..., ΑΝ.
Constraints

1 <= T <= 100
2 <= N <= 100
1 <= Ai <= 10^4 for each valid i
Output Format

For each test case, print a single line containing one integer ― the maximum sum of digits.

Sample Input 0
3
2
2 8
3
8 2 8
3
9 10 11

Sample Output 0
7
10
18
*/
#include <iostream>
#include <vector>
using namespace std;

int sumOfDigits(long long num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxDigitSum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long product = (long long)arr[i] * arr[j];
                int digitSum = sumOfDigits(product);
                maxDigitSum = max(maxDigitSum, digitSum);
            }
        }

        cout << maxDigitSum << endl;
    }

    return 0;
}