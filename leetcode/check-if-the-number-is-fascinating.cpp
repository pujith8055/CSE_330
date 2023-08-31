class Solution {
public:
    bool isFascinating(int n) {
        int m = 2*n;
        int p = 3*n;
        string a = to_string(n);
        string b = to_string(m);
        string c = to_string(p);
        string ans  = a+b+c;
        sort(ans.begin(), ans.end());
        bool flag = 0;
        int num = ans.size();
        for(int i=0;i<num-1;i++){
             if(ans[i]=='0'){
                flag = 1;
                break;
            }
            if(ans[i]==ans[i+ 1]){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            return false;
        }
        else{
            return true;
        }
        
        
            
        
    }
};