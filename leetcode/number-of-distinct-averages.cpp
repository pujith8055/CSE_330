class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<double> st;
        int n= nums.size(); int j= n-1;
        for (int i=0; i<(n/2); i++){
            double x= (1.0)*((double)(nums[i])+(double)(nums[j]))/2;
            j--;
            st.insert(x);
        }
        return st.size();
    }
};