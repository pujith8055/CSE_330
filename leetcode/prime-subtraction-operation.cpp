class Solution {
public:
    bool isprime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)return false;
        }
        return true;
    }
    bool primeSubOperation(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                for(int j=a[i]-1;j>=2;j--)
                {
                    if(isprime(j))
                    {
                        a[i]-=j;
                        break;
                    }
                }
            }
            else
            {
                int f=0;
                for(int j=a[i]-1;j>=2;j--)
                {
                    if(isprime(j) && a[i]-j>a[i-1])
                    {
                        a[i]-=j;
                        f=1;
                        break;
                    }
                }
                if(f==0 && a[i]<=a[i-1])return false;
            }
        }
        return true;
    }
};