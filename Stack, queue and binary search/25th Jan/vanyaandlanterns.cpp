
#include <bits/stdc++.h>
using namespace std;

bool check(double mid, vector<double> a, double l)
{
    if (a[0] - 0 > mid)
    {
        return false;
    }
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] - a[i - 1] > 2 * mid)
        {
            return false;
        }
    }
    if (l - a[a.size() - 1] > mid)
    {
        return false;
    }
    return true;
}

void solve()
{
    long double n, l;
    cin >> n >> l;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long double low = 0;
    long double high = l;
    while (low + 1e-8 < high)
    {
        long double mid = (low + high) / 2;
        if (check(mid, a, l))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout << fixed << setprecision(4) << high << endl;
}

int main()
{
    solve();
    return 0;
}