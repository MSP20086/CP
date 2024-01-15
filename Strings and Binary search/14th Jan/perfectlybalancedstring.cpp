#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    int n = s.length();
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] > 1)
        {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < n; i++)
    {
        if (s[i] != s[i - pos])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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