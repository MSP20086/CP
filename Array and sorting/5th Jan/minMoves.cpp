class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = 0;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            mini = min(mini, nums[i]);
        }
        return sum - n * mini;
    }
};