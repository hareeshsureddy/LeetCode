/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
 Constraints:

1 <= logs.length <= 104
0 <= IDi <= 109
1 <= timei <= 105
k is in the range [The maximum UAM for a user, 105].
*/
#define MAX_LOGS 10000
typedef struct {
    int id;
    int minute[MAX_LOGS];
    int cnt;
}user;

int* findingUsersActiveMinutes(int** logs, int logsSize, int* logsColSize, int k, int* returnSize) {
    //user user_data[MAX_LOGS];   //stack-overflow
    user *user_data=(user*)calloc(sizeof(user),MAX_LOGS);
    int user_cnt=0;
    for(int i=0;i<logsSize;i++){
        int id=logs[i][0];
        int minute=logs[i][1];
        int u=-1;
        for(int j=0;j<user_cnt;j++){
            if(user_data[j].id==id)
            {
                u=j;
                break;
            }
        }
        if(u==-1){
            user_data[user_cnt].id=id;
            user_data[user_cnt].cnt=0;
            u=user_cnt++;
        }
        bool duplicate=false;
        for(int k=0;k<user_data[u].cnt;k++){
            if(user_data[u].minute[k]==minute){
                    duplicate=true;
                    break;
            }
        }
        if(!duplicate){
            user_data[u].minute[user_data[u].cnt++]=minute;
        }
    }
    int *res=(int*)calloc(sizeof(int),k);
    for(int i=0;i<user_cnt;i++){
        int c=user_data[i].cnt;
        if(c>=1 && c<=k){
            res[c-1]++;
        }
    }
    *returnSize=k;
    return res;
}
/*
 #define idSize 1000000001
 #define minuteSize 100001
     bool map[idSize][minuteSize];
     int qniMinute[idSize];
int* findingUsersActiveMinutes(int** logs, int logsSize, int* logsColSize, int k, int* returnSize) {
    memset(map,0,sizeof(map));
    memset(qniMinute,0,sizeof(qniMinute));
    for(int i=0;i<logsSize;i++){
        int id=logs[i][0];
        int minute=logs[i][1];
        if(!map[id][minute]){
           qniMinute[id]++;
            map[id][minute]=true;
        }
    }
    int *res=(int*)calloc(sizeof(int),k);
    for(int i=0;i<idSize;i++){
        if(qniMinute[i] && qniMinute[i]<k){
            res[qniMinute[i]-1]++;
        }
    }
    *returnSize=k;
    return res;
}*/

