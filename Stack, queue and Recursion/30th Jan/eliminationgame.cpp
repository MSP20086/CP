class Solution
{
public:
    int lastRemaining(int n)
    {
        int start = 1;
        int diff = 1;
        bool dir = true;
        while (n > 1)
        {
            if (n & 1 || dir)
            {
                start += diff;
            }
            n = n / 2;
            diff *= 2;
            dir = !dir;
        }
        return start;
    }
};