/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if(digits[digitsSize-1]==9){
    int *result=(int*)malloc(sizeof(int)*(digitsSize+1));
    result[0]=0;
    int carry=1;
    for(int i=digitsSize-1;i>=0;i--){
        int sum=digits[i]+carry;
        if(sum==10) {
            carry=1;
         result[i+1]=0;   
        }
        else{
         carry=0;
          result[i+1]=sum; 
        }
    }
    if(carry) {
        result[0]=carry;
        *returnSize=digitsSize+1;
        return result;
    }else{
         *returnSize=digitsSize;
        return &result[1];       
    }
    }else{
        *returnSize=digitsSize;
      digits[digitsSize-1]++; 
      return  digits;
    }
return  digits;
}