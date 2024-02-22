class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> temp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (!temp.empty() && temp.front() == i - k)
            {
                temp.pop_front();
            }
            while (!temp.empty() && nums[temp.back()] < nums[i])
            {
                temp.pop_back();
            }
            temp.push_back(i);
            if (i >= k - 1)
            {
                ans.push_back(nums[temp.front()]);
            }
        }
        return ans;
    }
};