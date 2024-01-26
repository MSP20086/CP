class Solution
{
public:
    long long maximumSumOfHeights(vector<int> &maxHeights)
    {
        long long ans = INT_MIN;
        long long n = maxHeights.size();
        for (int i = 0; i < n; i++)
        {
            long long count = 0;
            vector<int> heights = maxHeights;
            for (int j = i - 1; j >= 0; j--)
            {
                heights[j] = min(maxHeights[j], heights[j + 1]);
            }
            for (int j = i + 1; j < n; j++)
            {
                heights[j] = min(maxHeights[j], heights[j - 1]);
            }
            for (int j = 0; j < n; j++)
            {
                count += heights[j];
            }
            ans = max(count, ans);
        }
        return ans;
    }
};