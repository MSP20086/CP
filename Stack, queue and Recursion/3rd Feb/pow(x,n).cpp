class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long ln = n;
        if (n < 0)
        {
            ln = -1 * ln;
        }
        while (ln)
        {
            if (ln % 2)
            {
                ans *= x;
                ln = ln - 1;
            }
            else
            {
                x = x * x;
                ln = ln / 2;
            }
        }
        if (n < 0)
        {
            return 1 / ans;
        }
        else
        {
            return ans;
        }
    }
};