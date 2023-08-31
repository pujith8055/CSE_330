class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int cnt = 0;
        sort(nums.begin(),nums.end());
        for(int i = 1; i<n; i++){
            if(nums[i]==nums[i-1]){
                nums[i]=-1;
                nums[i-1] = -1;
                cnt++;
            }
        }
        ans.push_back(cnt);
        ans.push_back(n-2*cnt);

        return ans;
    }
};