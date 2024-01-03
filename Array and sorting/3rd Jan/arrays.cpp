#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector <int> pos;
    vector <int> neg;
    vector <int> zero;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else if(arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            zero.push_back(arr[i]);
        }
    }
    if(neg.size()%2 == 0)
    {
        int x = neg[neg.size()-1];
        neg.pop_back();
        zero.push_back(x);
    }
    if(!pos.size())
    {
        int x = neg[neg.size()-1];
        neg.pop_back();
        pos.push_back(x);
        x = neg[neg.size()-1];
        neg.pop_back();
        pos.push_back(x);
    }
    cout<<neg.size()<<" ";
    for(int i = 0; i < neg.size(); i++)
    {
        cout<<neg[i]<<" ";
    }
    cout<<endl;
    cout<<pos.size()<<" ";
    for(int i = 0; i < pos.size(); i++)
    {
        cout<<pos[i]<<" ";
    }
    cout<<endl;
    cout<<zero.size()<<" ";
    for(int i = 0; i < zero.size(); i++)
    {
        cout<<zero[i]<<" ";
    }
}

int main()
{
    solve();
    return 0;
}
