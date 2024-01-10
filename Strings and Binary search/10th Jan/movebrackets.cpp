#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> temp;
    for (int i = 0; i < n; i++)
    {
        if (temp.empty() || s[i] == '(')
        {
            temp.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (temp.top() == '(')
            {
                temp.pop();
            }
            else
            {
                temp.push(s[i]);
            }
        }
    }
    cout << temp.size() / 2 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}