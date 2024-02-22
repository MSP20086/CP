#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> k(q);
    for (int i = 0; i < q; i++)
    {
        cin >> k[i];
    }
    sort(a.begin(), a.end());
    map<long long, long long> mpp;
    long long current = 0;
    for (int i = 0; i < n - 2; i++)
    {
        current += (n - i - 1) * (n - i - 2) / 2;
        mpp[current] = a[i];
    }
    for (int i = 0; i < q; i++)
    {
        cout << mpp.lower_bound(k[i])->second << endl;
    }
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
