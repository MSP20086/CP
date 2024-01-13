#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, bool> check;
    vector<string> ans;
    string cur = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (check[s[i]] == false)
        {
            if (cur.length() > 0)
            {
                ans.push_back(cur);
            }
            cur = "";
            cur += s[i];
            check[s[i]] = true;
        }
        else
        {
            cur += s[i];
        }
    }
    ans.push_back(cur);
    if (ans.size() < n)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = n; i < ans.size(); i++)
        {
            ans[n - 1] += ans[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}