#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> temp;
    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (!temp.empty() && temp.top() == '<' && s[i] == '>')
        {
            temp.pop();
        }
        else
        {
            temp.push(s[i]);
        }
        if (temp.empty())
        {
            ans = i + 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}