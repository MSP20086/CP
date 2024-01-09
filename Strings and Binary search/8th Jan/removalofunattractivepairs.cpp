#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int maxfreq = 0;
    for (auto it : m)
    {
        int count = it.second;
        if (count > maxfreq)
        {
            maxfreq = count;
        }
    }
    cout << max(n % 2, 2 * maxfreq - n) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}