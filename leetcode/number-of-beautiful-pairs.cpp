class Solution 
{
public:
    int countBeautifulPairs(vector<int>& nums) 
    {
        int cnt=0, n=nums.size(), first, last;
        for(int i=0; i<n; i++)
        {
            first = nums[i];
            while(first>9)first /= 10;
            
            for(int j=i+1; j<n; j++)
            {
                last = nums[j]%10;
                if(gcd(first, last)==1) cnt++;
            }
        }
        return cnt;        
    }
};