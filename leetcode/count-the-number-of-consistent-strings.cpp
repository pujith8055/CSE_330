class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = words.size();
        vector<bool> ans(26,false);
        for(auto c:allowed) {
            ans[c-'a']=true;
        }
        for(auto word:words) {
            for(auto c:word) {
                if(!ans[c-'a']) {
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};