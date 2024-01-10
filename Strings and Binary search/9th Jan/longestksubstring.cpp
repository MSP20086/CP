class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        unordered_map<char, int> mpp;
        int i = 0, j = 0, ans = -1;
        int n = s.length();

        while (i < n)
        {
            mpp[s[i]]++;

            while (mpp.size() > k)
            {
                mpp[s[j]]--;
                if (mpp[s[j]] == 0)
                {
                    mpp.erase(s[j]);
                }
                j++;
            }

            if (mpp.size() == k)
            {
                ans = max(ans, i - j + 1);
            }
            i++;
        }
        return ans;
    }
};