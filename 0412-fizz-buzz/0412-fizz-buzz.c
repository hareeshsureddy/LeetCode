/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **result=(char**)malloc(sizeof(char*)*(n));
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            result[i-1]=(char*)malloc(sizeof(char)*9);
            result[i-1]="FizzBuzz";
        }else if (i%3==0){
            result[i-1]=(char*)malloc(sizeof(char)*5);
            result[i-1]="Fizz";
        }else if(i%5==0){
            result[i-1]=(char*)malloc(sizeof(char)*5);
            result[i-1]="Buzz";
        }else{
            result[i-1]=(char*)malloc(sizeof(char*)*5);
            sprintf(result[i-1],"%d",i);
        }
    }
    *returnSize=n;
    return result;
}