/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize=candiesSize;
    int max=0;
    for(int i=0;i<candiesSize;i++){
        max=(max<candies[i])?candies[i]:max;
    }
    bool *res=(bool*)calloc(sizeof(bool),candiesSize);
        for(int i=0;i<candiesSize;i++){
            if(candies[i]+extraCandies>=max)
            res[i]=true;
        }
        return res;
}