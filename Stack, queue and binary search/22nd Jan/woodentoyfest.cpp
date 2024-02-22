#include <bits/stdc++.h>
using namespace std;

bool check(int mid, vector<int> &a)
{
    long long count = 0;
    int i = 0;
    int j = 0;
    while (i < a.size() && j < a.size())
    {
        while (j < a.size() && a[j] - a[i] <= 2 * mid)
        {
            j++;
        }
        count++;
        i = j;
    }
    if (count <= 3)
    {
        return true;
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long low = 0;
    long long high = 1e9 + 1;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        if (check(mid, a))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low << endl;
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