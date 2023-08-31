class Solution {
public:
    int days_till_date(string date1){
        int Y = stoi(date1.substr(0,4));
        int M = stoi(date1.substr(5,2));
        int D = stoi(date1.substr(8,2));
        int days = D;
        for(int y=1971; y<Y; y++){
            if((y%4==0 && y%100!=0)||(y%400==0)){
                days += 366;
            }else{
                days += 365;
            }
        }
        for(int m=1; m<M; m++){
            if(m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12){
                days += 31;
            }else if(m!=2)
                days += 30;
            else if((Y%4==0 && Y%100!=0)||(Y%400==0)){
                days += 29;
            }else{
                days += 28;
            }
        }
        return days;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(days_till_date(date2)-days_till_date(date1));
    }
};