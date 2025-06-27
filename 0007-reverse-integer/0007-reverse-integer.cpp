class Solution {
public:
    int reverse(int x) {
        #define MIN -2147483648
#define MAX  2147483647
     long result=0;
    while(x){
        result*=10;
        result+=(x%10);
        x/=10;
    }
    if((result>(MAX)) || (result<(MIN))) return 0;
    return (int)result;       
    }
};