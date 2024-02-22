class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        long long n = arr.size();
        stack<long long> s;
        vector<long long> left(n);
        vector<long long> right(n);
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                left[i] = -1;
            }
            else
            {
                left[i] = s.top();
            }
            s.push(i);
        }
        while (!s.empty())
        {
            s.pop();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && arr[s.top()] > arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                right[i] = n;
            }
            else
            {
                right[i] = s.top();
            }
            s.push(i);
        }
        long long sum = 0;
        long long mod = int(1e9 + 7);
        for (int i = 0; i < n; i++)
        {
            sum = (sum + ((i - left[i]) * (right[i] - i) * arr[i]) % mod) % mod;
        }
        return sum;
    }
};