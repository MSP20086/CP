class Solution {
public:
    long long binomial(int mid, int k, int n)
    {
        long long sum = 0;
        long long res = 1;
        for(int i = 1; i <= k; i++)
        {
            res = res*(mid-i + 1)/i;
            sum += res;
            if(sum >= n)
            {
                return sum;
            }
        }
        return sum;
    }
    int superEggDrop(int k, int n) {
        int low = 1;
        int high = n;
        int mid;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(binomial(mid,k,n) < n)
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