#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int sum = arr[0];
    int maxi = arr[0];
    int mini = min(arr[0], 0);
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i])%2 == abs(arr[i-1]%2))
        {
            mini = 0;
            sum = 0;
        }
        sum += arr[i];
        maxi = max(maxi, sum - mini);
        mini = min(mini, sum);
    }
    cout<<maxi<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}