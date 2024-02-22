class Solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        long long n = nums.size();
        stack<long long> s;
        vector<long long> left(n);
        vector<long long> right(n);
        vector<long long> leftl(n);
        vector<long long> rightl(n);
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && nums[s.top()] >= nums[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                left[i] = 0;
            }
            else
            {
                left[i] = s.top() + 1;
            }
            s.push(i);
        }
        while (!s.empty())
        {
            s.pop();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && nums[s.top()] > nums[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                right[i] = n - 1;
            }
            else
            {
                right[i] = s.top() - 1;
            }
            s.push(i);
        }
        while (!s.empty())
        {
            s.pop();
        }
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && nums[s.top()] <= nums[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                leftl[i] = 0;
            }
            else
            {
                leftl[i] = s.top() + 1;
            }
            s.push(i);
        }
        while (!s.empty())
        {
            s.pop();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && nums[s.top()] < nums[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                rightl[i] = n - 1;
            }
            else
            {
                rightl[i] = s.top() - 1;
            }
            s.push(i);
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum -= (i - left[i] + 1) * (right[i] - i + 1) * nums[i];
            sum += (i - leftl[i] + 1) * (rightl[i] - i + 1) * nums[i];
        }
        return sum;
    }
};