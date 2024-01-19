class Solution
{
public:
    int maxPoints(vector<vector<int>> &points)
    {
        int ans = 0;
        if (points.size() == 1)
        {
            return 1;
        }
        for (int i = 0; i < points.size(); i++)
        {
            int count = 1;
            unordered_map<double, int> map;
            for (int j = i + 1; j < points.size(); j++)
            {
                if (points[i][0] == points[j][0] && points[i][1] == points[j][1])
                {
                    count++;
                }
                else if (points[i][0] == points[j][0])
                {
                    map[INT_MAX]++;
                }
                else
                {
                    double slope = double(points[i][1] - points[j][1]) / double(points[i][0] - points[j][0]);
                    map[slope]++;
                }
            }

            int maxi = INT_MIN;
            for (auto it = map.begin(); it != map.end(); it++)
            {
                maxi = max(maxi, it->second);
            }
            maxi += count;
            ans = max(ans, maxi);
        }
        return ans;
    }
};