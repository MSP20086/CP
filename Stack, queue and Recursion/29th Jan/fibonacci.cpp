class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

// class Solution
// {
// public:
//     int fib(int n)
//     {
//         double phi = (sqrt(5) + 1) / 2;
//         return round(pow(phi, n) / sqrt(5));
//     }
// };