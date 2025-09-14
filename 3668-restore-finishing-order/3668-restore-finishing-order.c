/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
static bool map[101];
int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    memset(map,false,sizeof(bool)*101);
    for(int i=0;i<friendsSize;i++){
        map[friends[i]]=true;
    }
    int idx=0;
    for(int i=0;i<orderSize;i++){
        if(map[order[i]]) 
            friends[idx++]=order[i];
    }
    *returnSize=friendsSize;
    return friends;
}