class Solution {
public:
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

    int primePalindrome(int n) {
        int ans=0,rev=0;
        // if (1e7 <= n && n <= 1e8)
        // return 100030001;
        for(int i=n;i<10000000;i++){
if(isPrime(i)){
    ans=i;
int k=i;
while(k!=0){
    int rem=k%10;
    rev=rev*10+rem;
    k/=10;
}
if(rev==ans){
    return ans;
}
else{
    rev=0;
}
        }
       }
        
        return 100030001;
    }
};