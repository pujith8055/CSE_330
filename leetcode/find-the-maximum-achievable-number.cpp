class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int ans=0;
        int xeq=num+t;
        while(t>0){
            xeq+=1;
            t--;
        }
        ans=xeq;
        return ans;
    }
};