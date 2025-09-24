class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(!numerator) return "0";
        string result;
        if(((long long)numerator*(long long)denominator)<0) result+='-';
        long long absnumerator=numerator;
        if(absnumerator<0) absnumerator*=-1;
        long long absdenominator=denominator;
        if(absdenominator<0) absdenominator*=-1;
        long long integerDiv=absnumerator/absdenominator;
        result+=to_string(integerDiv);
        long long rem=absnumerator%absdenominator;
        if(!rem) return result;
        result+='.';
        unordered_map<int,int>mp; // rem, postion
        while(rem){
            if(mp.count(rem)){
                result.insert(mp[rem],"(");
                result+=")";
                break;
            }
            mp[rem]=result.length();
            rem*=10;
            int digit=rem/absdenominator;
            result+=to_string(digit);
            rem%=absdenominator;
        }
        return result;
    }
};