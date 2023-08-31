class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto ele: details){
            int num = (ele[11]-'0')*10 + (ele[12]-'0');
            if(num > 60) ans++;
        }
        return ans;
    }
};