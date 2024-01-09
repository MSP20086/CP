#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int size = n;
    for (int i = n - 1; i >= 0; i--)
    {
        int x = d / a[i] + 1;
        if (x > size)
        {
            break;
        }
        else
        {
            ans++;
            size -= x;
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}
