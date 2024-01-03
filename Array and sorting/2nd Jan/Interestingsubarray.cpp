#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long mini,maxi;
    if(arr[0] > 0 && arr[n-1] > 0)
    {
        mini = arr[0]*arr[0];
        maxi = arr[n-1]*arr[n-1];
    }
    else if(arr[0] < 0 && arr[n-1] < 0)
    {
        mini = arr[n-1]*arr[n-1];
        maxi = arr[0]*arr[0];
    }
    else
    {
        mini = arr[0]*arr[n-1];
        if(abs(arr[0]) > (arr[n-1]))
        {
            maxi = arr[0]*arr[0];
        }
        else
        {
            maxi = arr[n-1]*arr[n-1];
        }
    }
    cout<<mini<<" "<<maxi<<endl;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
