class Solution {
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int act_sum=0;
        int dig_sum=0;

        for(int i=0; i<nums.size(); i++)
        {
            act_sum+=nums[i];

            int nums_temp=nums[i];
            while(nums_temp>0)
            {
                dig_sum=dig_sum+nums_temp%10;
                nums_temp=nums_temp/10;
            }
        }

        return abs(act_sum-dig_sum);
    }
};