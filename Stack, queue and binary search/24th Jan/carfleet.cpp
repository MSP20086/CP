class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        map<int, double, greater<int>> mpp;
        for (int i = 0; i < position.size(); i++)
        {
            mpp[position[i]] = double((target - position[i])) / speed[i];
        }
        double cur = 0;
        double res = 0;
        for (auto i : mpp)
        {
            if (i.second > cur)
            {
                cur = i.second;
                res++;
            }
        }
        return res;
    }
};