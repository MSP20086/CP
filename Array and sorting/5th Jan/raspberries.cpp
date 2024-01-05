#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double n, k;
    cin >> n >> k;
    vector<int> a(n);
    double mini = INT_MAX;
    int evencount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            evencount++;
        }
        mini = min(mini, k * ceil(double(a[i]) / k) - a[i]);
    }
    if (k != 4 || n == 1 || mini == 0)
    {
        cout << mini << endl;
    }
    else
    {
        cout << min(mini, double(max(0, 2 - evencount))) << endl;
    }
    return;
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