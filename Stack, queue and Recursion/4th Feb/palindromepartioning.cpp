class Solution
{
public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> temp;
        helper(0, s, temp, ans);
        return ans;
    }

    void helper(int ind, string s, vector<string> temp, vector<vector<string>> &ans)
    {
        if (ind == s.size())
        {
            ans.push_back(temp);
            return;
        }
        for (int i = ind; i < s.size(); i++)
        {
            if (ispalindrome(s, ind, i))
            {
                temp.push_back(s.substr(ind, i - ind + 1));
                helper(i + 1, s, temp, ans);
                temp.pop_back();
            }
        }
    }

    bool ispalindrome(string s, int ind, int i)
    {
        while (ind <= i)
        {
            if (s[ind++] != s[i--])
            {
                return false;
            }
        }
        return true;
    }
};