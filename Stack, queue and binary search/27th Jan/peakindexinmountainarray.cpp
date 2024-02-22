class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int low = 0;
        int high = arr.size() - 1;
        int mid;

        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] > arr[mid + 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};