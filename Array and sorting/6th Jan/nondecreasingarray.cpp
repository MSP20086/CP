class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
        {
            return true;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (i < n - 2 && nums[i] > nums[i + 1])
            {
                if (nums[i] <= nums[i + 2])
                {
                    nums[i + 1] = nums[i];
                }
                else if (nums[i] > nums[i + 2])
                {
                    nums[i] = nums[i + 1];
                }
                break;
            }
            else if (i >= n - 2)
            {
                if (nums[i] > nums[i + 1] && nums[i - 1] > nums[i + 1])
                {
                    nums[i + 1] = nums[i];
                }
                else
                {
                    nums[i] = nums[i + 1];
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};