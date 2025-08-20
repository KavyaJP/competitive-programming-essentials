#include <bits/stdc++.h>
using namespace std;

int MaximumSumSubarray(vector<int> A, int n)
{
    // Divide and Conquer Approach
    if (n == 1)
        return A[0];
    int mid = n / 2;
    int left_max = MaximumSumSubarray(A, mid);
    int right_max = MaximumSumSubarray(A, mid);
    int cross_max = 0;
    int left_sum = INT_MIN, right_sum = INT_MIN;
    for (int i = mid - 1, sum = 0; i >= 0; i--)
    {
        sum += A[i];
        left_sum = max(left_sum, sum);
    }
    for (int i = mid, sum = 0; i < n; i++)
    {
        sum += A[i];
        right_sum = max(right_sum, sum);
    }
    cross_max = left_sum + right_sum;
    return max({left_max, right_max, cross_max});
}

int main()
{
    int n;
    cout << "Enter number of Elements: ";
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << "Array: ";
    for (auto x : A)
        cout << x << " ";
    cout << endl;
    int max_sum = MaximumSumSubarray(A, n);
    cout << "Maximum Sum of Subarray: " << max_sum << endl;
    return 0;
}