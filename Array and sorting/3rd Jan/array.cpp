#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int as,bs;
    cin>>as>>bs;
    vector<int> a;
    vector<int> b;
    int k,m;
    cin>>k>>m;
    for(int i = 0; i < as; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i = 0; i < bs; i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[k-1] < b[bs - m] && k <= as && m <= bs)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    solve();
    return 0;
}