class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        stack<char> temp;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (temp.empty())
            {
                temp.push(s[i]);
            }
            else if (temp.top() == '(' && s[i] == ')')
            {
                temp.pop();
            }
            else
            {
                temp.push(s[i]);
            }
        }
        return temp.size();
    }
};