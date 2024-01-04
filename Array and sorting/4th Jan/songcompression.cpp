#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <long long,long long> a, pair <long long,long long> b)
{
    return a.first - a.second < b.first - b.second;
}

void solve()
{
    long long n,m;
    cin >> n >> m;
    vector <pair <long long,long long>> v;
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        long long a,b;
        cin >> a >> b;
        v.push_back({a,b});
        sum += b;
        if(sum > m)
        {
            cout << -1 << endl;
            return;
        }
    }
    sort(v.begin(),v.end(), cmp);
    int ans = n;
    for(int i = 0; i < n; i++)
    {
        if(sum - v[i].second + v[i].first <= m)
        {
            ans--;
            sum = sum - v[i].second + v[i].first;
        }
        else
        {
            break;
        }
    }
    cout<<ans;
}

int main()
{
    solve();
    return 0;
}