class Solution {
public:
    bool checkRecord(string s) {
        int a = 0, b = 0, c = 0;
        for(auto &i: s){
            if(i=='A')a++,b=0;//count of Absent and consicutive late 0
            else if(i=='L')b++;//consicutive late count
            else b = 0;//if present consicutive late count = 0
            if(b>=3)c = 1;//if consicutive late >= 3 than return true
        }
        if(c||a>1)return false;
        return true;
    }
};