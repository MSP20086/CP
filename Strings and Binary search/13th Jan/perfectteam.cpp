#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double c, m, x;
    cin >> c >> m >> x;
    int temp = min(min(c, m), x);
    c = c - temp;
    m = m - temp;
    x = x - temp;
    if (c == 0 || m == 0)
    {
        cout << temp << endl;
        return;
    }
    cout << temp + floor(double(c + m) / 3) << endl;
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