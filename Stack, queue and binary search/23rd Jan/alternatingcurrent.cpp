#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    if (st.empty())
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
    solve();
    return 0;
}