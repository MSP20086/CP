#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.size() <= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}