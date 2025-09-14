/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** spiralMatrix(int m, int n, struct ListNode* head, int* returnSize, int** returnColumnSizes) {
    int **matrix=(int**)malloc(sizeof(int*)*m);
    for(int i=0;i<m;i++){
        matrix[i]=(int*)malloc(sizeof(int)*n);
        memset(matrix[i],-1,sizeof(int)*n);
    }
    int *columnSize=(int*)malloc(sizeof(int)*m);
    for(int i=0;i<m;i++){
        columnSize[i]=n;
    }
    *returnColumnSizes=columnSize;
    *returnSize=m;
    int top=0,down=m-1;
    int left=0,right=n-1;
    int dir=0;
    while(head){
        switch(dir){
        case 0:
        for(int j=left;j<=right&& head;j++){
        matrix[top][j]=head->val;
        head=head->next;
        }
        top++;
        dir=1;
        break;
        case 1:
        for(int i=top;i<=down&& head;i++){
        matrix[i][right]=head->val;
        head=head->next;
        }
        right--;
        dir=2;
        break;
        case 2:
        for(int j=right;j>=left && head;j--){
        matrix[down][j]=head->val;
        head=head->next;
        }
        down--;
        dir=3;
        break;
        case 3:
        for(int i=down;i>=top&& head;i--){
        matrix[i][left]=head->val;
        head=head->next;
        }
        left++;
        dir=0;
        break;
        }
    }
    return matrix;
}