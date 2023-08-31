class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        string db;
        for (int i = 0; n > 0; i++)
        {
            db += to_string(n % 2);
            n /= 2;
        }
        for (int i = 1; i <= db.length(); ++i)
        {
            if (db[i] == db[i - 1])
                return false;
        }
        return true;
    }
};