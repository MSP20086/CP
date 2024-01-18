class Solution
{
public:
    void merge(vector<int> &count, vector<pair<int, int>> &v, int left, int mid, int right)
    {
        vector<pair<int, int>> temp(right - left + 1);
        int i = left;
        int j = mid + 1;
        int k = 0;
        int c = 0;

        while (i <= mid && j <= right)
        {
            if (v[i].first <= v[j].first)
            {
                count[v[i].second] += c;
                temp[k++] = v[i++];
            }
            else
            {
                c++;
                temp[k++] = v[j++];
            }
        }
        while (i <= mid)
        {
            count[v[i].second] += c;
            temp[k++] = v[i++];
        }
        while (j <= right)
        {
            temp[k++] = v[j++];
        }
        for (i = left; i <= right; i++)
        {
            v[i] = temp[i - left];
        }
    }
    void mergesort(vector<int> &count, vector<pair<int, int>> &v, int left, int right)
    {
        if (left >= right)
        {
            return;
        }

        int mid = left + (right - left) / 2;
        mergesort(count, v, left, mid);
        mergesort(count, v, mid + 1, right);
        merge(count, v, left, mid, right);
    }
    vector<int> countSmaller(vector<int> &nums)
    {
        int n = nums.size();
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            v[i] = make_pair(nums[i], i);
        }

        vector<int> count(n, 0);
        mergesort(count, v, 0, n - 1);

        return count;
    }
};