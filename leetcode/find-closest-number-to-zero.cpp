class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int ans=nums[0];

        int diff=abs(nums[0]);


        for(int i=1;i<nums.size();i++)
        {
            if(abs(nums[i]) < diff)
            {
                ans=nums[i];
                diff=abs(nums[i]);
            }

            if(diff==abs(nums[i]) && nums[i]>ans)
            {
                ans=nums[i];
            }
        }

        return ans;
    }
};