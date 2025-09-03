#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largestProduct(const vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }

    int max_so_far = nums[0];
    int min_so_far = nums[0];
    int result = nums[0];

    for (size_t i = 1; i < nums.size(); ++i)
    {
        int current = nums[i];

        if (current < 0)
        {
            swap(max_so_far, min_so_far);
        }

        max_so_far = max(current, max_so_far * current);
        min_so_far = min(current, min_so_far * current);

        result = max(result, max_so_far);
    }

    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << largestProduct(nums);

    return 0;
}
