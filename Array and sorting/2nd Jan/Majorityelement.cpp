class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = -1, freq = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++ )
        {
            if(!freq)
            {
                ele = nums[i];
                freq++;
            }
            else if(nums[i] == ele)
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        return ele;
    }
};