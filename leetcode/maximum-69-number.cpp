class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for(int i=0;i<s.length();i++){
            if(s[i]!='9'){
                s[i]='9';
                break;
            }
        }
        num=0;
       for(int i=0;i<s.length();i++){
           num=num*10+(int)s[i]-48;
       }
        return num;
    }
};