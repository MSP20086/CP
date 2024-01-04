class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans = INT_MIN;
        int n = citations.size();
        sort(citations.begin(),citations.end(),greater <int> ());
        for(int i = 0; i < n; i++)
        {
            int cur = min(i+1,citations[i]);
            if(ans > cur)
            {
                break;
            }
            ans = cur;
        }
        return ans;
    }
};