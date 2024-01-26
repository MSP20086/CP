class Solution
{
public:
    int tempfunc(string &s, char a, char b)
    {
        stack<char> temp;
        int i = 0;
        int count = 0;
        while (i < s.size())
        {
            if (!temp.empty() && temp.top() == a && s[i] == b)
            {
                temp.pop();
                i++;
                count++;
            }
            else
            {
                temp.push(s[i]);
                i++;
            }
        }
        s = "";
        while (!temp.empty())
        {
            s += temp.top();
            temp.pop();
        }
        reverse(s.begin(), s.end());
        return count;
    }
    int maximumGain(string s, int x, int y)
    {
        int a, b;
        if (x > y)
        {
            a = tempfunc(s, 'a', 'b');
            b = tempfunc(s, 'b', 'a');
        }
        else
        {
            b = tempfunc(s, 'b', 'a');
            a = tempfunc(s, 'a', 'b');
        }
        return x * a + y * b;
    }
};