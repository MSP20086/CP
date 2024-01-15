#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    long long maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    long long low = 0;
    long long high = maxi + x;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = 0;
        for (int i = 0; i < n; i++)
        {
            val += max(mid - a[i], static_cast<long long>(0));
        }
        if (val > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low - 1 << endl;
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