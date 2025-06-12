/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    *returnSize=pricesSize;
    for (int i=0;i<pricesSize-1;i++){
            for (int j=i+1;j<pricesSize;j++){
                if(prices[j]<=prices[i]){
                prices[i]-=prices[j];
                break;
                }
            }
    }
    return prices;
}