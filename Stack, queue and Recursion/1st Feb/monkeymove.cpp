class Solution
{
public:
    long long binpow(long long a, long long b)
    {
        long long mod = int(1e9 + 7);
        long long res = 1;
        while (b > 0)
        {
            if (b & 1)
                res = res * a % mod;
            a = a * a % mod;
            b >>= 1;
        }
        return res;
    }

    int monkeyMove(int n)
    {
        int mod = int(1e9 + 7);
        long long ans = (binpow(2, n) % mod - 2 + mod) % mod;
        return ans;
    }
};