class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) { 
        if (numerator == 0) return "0";
        bool isPositive = (numerator > 0 && denominator > 0) || (numerator < 0 && denominator < 0);
        long long a = abs(numerator);
        long long b = abs(denominator);
        string mantissa = to_string(a / b);
        string fractional;
        a = a % b;
        vector<int> inff;
        while (a > 0) {
            bool shouldReturn = false;
            for (int i = 0; i < inff.size(); i++) {
                if (inff[i] == a) {
                    fractional = fractional.substr(0, i) + "(" + fractional.substr(i) + ")";
                    shouldReturn = true;
                    break;
                }
            }
            if (shouldReturn) {
                break;
            }
            inff.push_back(a);
            if (a < b) {
                a *= 10;
                fractional += "0";
            }
            fractional[fractional.length() - 1] = to_string(a / b)[0];
            a = a % b;
        }
        string result;
        if (isPositive) {
            result = fractional != "" ? mantissa + "." + fractional : mantissa;
        } else {
            result = "-" + (fractional != "" ? mantissa + "." + fractional : mantissa);
        }
        return result;
    }
};