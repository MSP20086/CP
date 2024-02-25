class Solution
{
public:
    int solve(vector<int> &nums, int i, int j)
    {
        if (i > j)
        {
            return 0;
        }
        if (i == j)
        {
            return nums[i];
        }
        int x = nums[i] + min(solve(nums, i + 2, j), solve(nums, i + 1, j - 1));
        int y = nums[j] + min(solve(nums, i + 1, j - 1), solve(nums, i, j - 2));
        return max(x, y);
    }
    bool predictTheWinner(vector<int> &nums)
    {
        int ans = solve(nums, 0, nums.size() - 1);
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        int other = sum - ans;
        if (ans >= other)
        {
            return true;
        }
        return false;
    }
};