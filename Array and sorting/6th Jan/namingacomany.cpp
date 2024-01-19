class Solution
{
public:
    long long distinctNames(vector<string> &ideas)
    {
        long long ans = 0;

        unordered_set<string> suffix[26];

        for (const string &idea : ideas)
        {
            suffix[idea[0] - 'a'].insert(idea.substr(1));
        }

        for (int i = 0; i < 25; i++)
        {
            for (int j = i + 1; j < 26; j++)
            {
                long long count = 0;
                for (const string &suf : suffix[i])
                {
                    if (suffix[j].count(suf))
                    {
                        count++;
                    }
                }
                ans += 2 * (suffix[i].size() - count) * (suffix[j].size() - count);
            }
        }
        return ans;
    }
};