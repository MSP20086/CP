#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pre = -1;
    int suf = n;
    for(int i = 0 ; i < n; i++)
    {
        if(a[i] < i)
        {
            break;
        }
        else
        {
            pre = i;
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(a[i] < n-1-i)
        {
            break;
        }
        else
        {
            suf = i;
        }
    }
    if(pre >= suf)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}