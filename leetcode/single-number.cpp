class Solution {
public:
typedef pair<int,int>p;
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        priority_queue<p,vector<p>,greater<p>> pq;
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        return pq.top().second;
    }
};