class Solution
{
public:
    int findKthNumber(int m, int n, int k)
    {
        int low = 0;
        int high = n * m;
        int mid;
        int count;
        while (low <= high)
        {
            mid = (low + high) / 2;
            count = 0;

            for (int i = 1; i <= m; i++)
            {
                count += min(mid / i, n);
            }

            if (count < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return low;
    }
};