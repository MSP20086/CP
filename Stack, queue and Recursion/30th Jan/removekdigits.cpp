class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        if (num.size() <= k)
        {
            return "0";
        }
        if (k == 0)
        {
            return num;
        }
        stack<int> temp;
        for (int i = 0; i < num.size(); i++)
        {
            if (temp.empty())
            {
                temp.push(num[i]);
            }
            else
            {
                while (k > 0 && !temp.empty() && num[i] < temp.top())
                {
                    temp.pop();
                    k--;
                }
                temp.push(num[i]);
            }
        }
        while (k > 0 && !temp.empty())
        {
            k--;
            temp.pop();
        }
        string ans = "";
        while (!temp.empty())
        {
            ans += temp.top();
            temp.pop();
        }
        reverse(ans.begin(), ans.end());
        int i = 0;
        while (ans[i] == '0')
        {
            i++;
        }
        ans.erase(0, i);
        if (ans == "")
        {
            ans += "0";
        }
        return ans;
    }
};