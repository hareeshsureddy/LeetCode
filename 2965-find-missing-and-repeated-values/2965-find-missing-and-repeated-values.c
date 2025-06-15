/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int *map=(int*)calloc((gridSize*gridSize+1),sizeof(int));
    int *result=(int*)malloc(2*sizeof(int));
    bool flag=true;
    int actualXor=0;
    for(int i=0;i<gridSize;i++){
        for (int j=0;j<gridSize;j++){
            if(map[grid[i][j]] && flag){
            result[0]=grid[i][j];
            flag=false;
            }
            actualXor^=grid[i][j];
            map[grid[i][j]]=1;
        }
    }
    free(map);
    int xor[4]={(gridSize*gridSize),1,(gridSize*gridSize)+1,0};
    result[1]=actualXor^result[0]^xor[(gridSize*gridSize)%4];
    *returnSize=2;
    return result;
} */
/*
**Sum of n natural numbers**
=(n*(n+1))/2

actualSum=1+a+3+b
givenSum=1+a+a+3
actualSum+a-b=givenSum
givenSum-actualSum =a-b  **--> Equ-1**

**Sum of squares of n natural numbers**
=(n*(n+1)*(2n+1))/6

actualSquareSum+a^2-b^2=givenSquareSum
givenSquareSum-actualSquareSum= (a^2)-(b^2)
givenSquareSum-actualSquareSum= (a-b)^2
givenSquareSum-actualSquareSum= (a-b)(a+b)   **--> Equ-2**

by substituting  equ-1 in equ-2;
givenSquareSum-actualSquareSum= (givenSum-actualSum)(a+b)
(givenSquareSum-actualSquareSum)/ (givenSum-actualSum)=(a+b)   **--> Equ-3**

adding equ-1 & 3
(a+b)+(a-b)=(givenSum-actualSum)+((givenSquareSum-actualSquareSum)/ (givenSum-actualSum)=(a+b) )
2a=(givenSum-actualSum)+((givenSquareSum-actualSquareSum)/ (givenSum-actualSum)=(a+b) )
a=((givenSum-actualSum)+((givenSquareSum-actualSquareSum)/ (givenSum-actualSum)=(a+b) ))/2

substitute a in equation 1;
givenSum-actualSum =a-b
*b=a-givenSum-actualSum;*/
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int *result=(int*)malloc(2*sizeof(int));
    int n=(gridSize*gridSize);
    int actualSum =(n*(n+1))/2;
    int givenSum=0,givenSquareSum=0;
      for(int i=0;i<gridSize;i++){
        for (int j=0;j<gridSize;j++){
            givenSum+=grid[i][j];
            givenSquareSum+=(grid[i][j]*grid[i][j]);
        }
    }
    int actualSquareSum=(n*(n+1)*(2*n+1))/6;
result[0]=((givenSum-actualSum)+((givenSquareSum-actualSquareSum)/ (givenSum-actualSum)))/2;
result[1]=result[0]-givenSum+actualSum;
    *returnSize=2;
    return result;
}