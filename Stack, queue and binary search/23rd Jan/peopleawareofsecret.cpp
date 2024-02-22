class Solution
{
public:
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        long long mod = int(1e9 + 7);
        long long shared = 0;
        queue<long long> d;
        d.push(1);
        queue<long long> f;
        f.push(1);
        while (n - 1 > 0)
        {
            if (d.size() >= delay)
            {
                shared = (shared % mod + d.front() % mod) % mod;
                d.pop();
            }
            if (f.size() >= forget)
            {
                shared = (shared % mod - f.front() + mod) % mod;
                f.pop();
            }
            d.push(shared);
            f.push(shared);
            n--;
        }
        long long sum = 0;
        while (!f.empty())
        {
            sum = (sum % mod + f.front() % mod) % mod;
            f.pop();
        }
        return sum;
    }
};