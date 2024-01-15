class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        long long count = 0;
        long long n = columnTitle.size();
        for (int i = 0; i < n; i++)
        {
            count = count * 26 + columnTitle[i] - 64;
        }
        return count;
    }
};