int students(vector<int> &arr, int n, int mid)
{
    int student = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (pages + arr[i] <= mid)
        {
            pages += arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
    }
    return student;
}

int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int l = INT_MIN;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        l = max(l, arr[i]);
        r += arr[i];
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int no = students(arr, n, mid);
        if (no > m)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return l;
}