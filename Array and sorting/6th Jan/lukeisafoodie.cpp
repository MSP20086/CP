#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int v = a[0];
    int l = v - x;
    int r = v + x;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        l = max(l, a[i] - x);
        r = min(r, a[i] + x);
        if (l > r)
        {
            ans++;
            l = a[i] - x;
            r = a[i] + x;
        }
    }
    cout << ans << endl;
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