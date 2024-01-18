#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long gcde = 0;
    long long gcdo = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            gcde = __gcd(gcde, a[i]);
        }
        else
        {
            gcdo = __gcd(gcdo, a[i]);
        }
    }
    bool flage = true;
    bool flago = true;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && a[i] % gcdo == 0)
        {
            flago = false;
        }
        else if (i % 2 == 1 && a[i] % gcde == 0)
        {
            flage = false;
        }
    }
    if (flage && flago)
    {
        cout << max(gcde, gcdo) << endl;
    }
    else if (!flage && flago)
    {
        cout << gcdo << endl;
    }
    else if (flage && !flago)
    {
        cout << gcde << endl;
    }
    else
    {
        cout << 0 << endl;
    }
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