#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int gcd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != i + 1)
        {
            gcd = __gcd(gcd, abs(a[i] - i - 1));
        }
    }
    cout << gcd << endl;
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