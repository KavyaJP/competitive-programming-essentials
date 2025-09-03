#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

// Use the standard namespace to avoid prefixing with std::
using namespace std;

// Forward declarations of the functions
int maxSubArrayKadane(const vector<int> &nums);
int maxSubArrayDivideAndConquer(const vector<int> &nums);
int maxSubArrayBruteForce(const vector<int> &nums);
int maxSubArrayDP(const vector<int> &nums);
int maxSubArrayPrefixSum(const vector<int> &nums);

/**
 * @brief Finds the maximum subarray sum using brute force.
 * @param nums The input vector of integers.
 * @return The maximum subarray sum.
 * @complexity Time: O(n^2), Space: O(1)
 */
int maxSubArrayBruteForce(const vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }

    int max_sum = INT_MIN;
    int n = nums.size();

    for (int i = 0; i < n; ++i)
    {
        int current_sum = 0;
        for (int j = i; j < n; ++j)
        {
            current_sum += nums[j];
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
            }
        }
    }
    return max_sum;
}

/**
 * @brief Finds the maximum subarray sum using prefix sums.
 * @param nums The input vector of integers.
 * @return The maximum subarray sum.
 * @complexity Time: O(n), Space: O(1)
 */
int maxSubArrayPrefixSum(const vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }

    int max_sum = INT_MIN;
    int current_sum = 0;
    int min_prefix_sum = 0;

    for (int num : nums)
    {
        current_sum += num;
        max_sum = max(max_sum, current_sum - min_prefix_sum);
        min_prefix_sum = min(min_prefix_sum, current_sum);
    }
    return max_sum;
}

/**
 * @brief Helper function to find the max sum of a subarray crossing the midpoint.
 * @param nums The input vector.
 * @param low The starting index.
 * @param mid The middle index.
 * @param high The ending index.
 * @return The maximum sum of a subarray that crosses the midpoint.
 */
int maxCrossingSum(const vector<int> &nums, int low, int mid, int high)
{
    int left_sum = INT_MIN;
    int sum = 0;
    for (int i = mid; i >= low; --i)
    {
        sum += nums[i];
        if (sum > left_sum)
        {
            left_sum = sum;
        }
    }

    int right_sum = INT_MIN;
    sum = 0;
    for (int i = mid + 1; i <= high; ++i)
    {
        sum += nums[i];
        if (sum > right_sum)
        {
            right_sum = sum;
        }
    }

    // Check if both sums were found, if one side is empty, it shouldn't contribute
    if (left_sum == INT_MIN)
        return right_sum;
    if (right_sum == INT_MIN)
        return left_sum;

    return left_sum + right_sum;
}

/**
 * @brief Main recursive function for the divide and conquer approach.
 * @param nums The input vector.
 * @param low The starting index of the subarray.
 * @param high The ending index of the subarray.
 * @return The maximum subarray sum in the given range.
 */
int maxSubArrayRecursive(const vector<int> &nums, int low, int high)
{
    if (low == high)
    {
        return nums[low];
    }

    int mid = low + (high - low) / 2;

    int left_max = maxSubArrayRecursive(nums, low, mid);
    int right_max = maxSubArrayRecursive(nums, mid + 1, high);
    int cross_max = maxCrossingSum(nums, low, mid, high);

    return max({left_max, right_max, cross_max});
}

/**
 * @brief Wrapper function for the divide and conquer approach.
 * @param nums The input vector of integers.
 * @return The maximum subarray sum.
 * @complexity Time: O(n log n), Space: O(log n) for recursion stack
 */
int maxSubArrayDivideAndConquer(const vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }
    return maxSubArrayRecursive(nums, 0, nums.size() - 1);
}

/**
 * @brief Finds the maximum subarray sum using dynamic programming.
 * @param nums The input vector of integers.
 * @return The maximum subarray sum.
 * @complexity Time: O(n), Space: O(n)
 */
int maxSubArrayDP(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int n = nums.size();
    vector<int> dp(n);

    dp[0] = nums[0];
    int curr_max = dp[0];

    for (int i = 1; i < n; i++)
    {
        dp[i] = max(nums[i], dp[i - 1] + nums[i]);
        curr_max = max(curr_max, dp[i]);
    }

    return curr_max;
}

/**
 * @brief Finds the maximum subarray sum using Kadane's Algorithm.
 * @param nums The input vector of integers.
 * @return The maximum subarray sum.
 * @complexity Time: O(n), Space: O(1)
 */
int maxSubArrayKadane(const vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int max_sum = nums[0];
    int current_sum = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "1. Brute Force (O(n^2)): " << maxSubArrayBruteForce(nums) << endl;
    cout << "2. Prefix Sums (Optimized): " << maxSubArrayPrefixSum(nums) << endl;
    cout << "3. Divide and Conquer: " << maxSubArrayDivideAndConquer(nums) << endl;
    cout << "4. Dynamic Programming (O(n) space): " << maxSubArrayDP(nums) << endl;
    cout << "5. Kadane's Algorithm: " << maxSubArrayKadane(nums) << endl;

    return 0;
}
