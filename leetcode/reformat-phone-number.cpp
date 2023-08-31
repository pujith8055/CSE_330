class Solution {
public:
    string reformatNumber(string number) {
        string t = "";
        for(auto c:number){
            if(c >= '0' && c <= '9'){
                t.push_back(c);
            }
        }

        string ans = "";

        if(t.length() <= 3){
            return t;
        }
        if(t.length() == 4){
            ans.push_back(t[0]);
            ans.push_back(t[1]);
            ans.push_back('-');
            ans.push_back(t[2]);
            ans.push_back(t[3]);
            return ans;
        }
        int i =3;
        ans = t.substr(0, 3);
        int n = t.length();
        while(i < t.length()){
            ans.push_back('-');

            if(n - i <= 3){
                string s = t.substr(i,n-i);
                ans += s;
                i += (n-i);
            }
            if(n-i == 4){
                string s = t.substr(i,2);
                ans += s;
                i += 2;
                ans.push_back('-');
                s = t.substr(i,2);
                ans += s;
                i += 2;
                return ans;
            }
            if(n- i >= 3){
                string s = t.substr(i,3);
                ans += s;
                i += 3;
            }
        }
        return ans;
    }
};