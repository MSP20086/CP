class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int ans = 0;
        int n = words.size();
        vector<int> temp(n, 0);
        for (int i = 0; i < n; i++)
        {
            string word = words[i];
            for (int j = 0; j < word.size(); j++)
            {
                temp[i] = temp[i] | 1 << (word[j] - 'a');
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((temp[i] & temp[j]) == 0)
                {
                    ans = max(ans, int(words[i].size() * words[j].size()));
                }
            }
        }
        return ans;
    }
};