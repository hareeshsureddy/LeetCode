/*quick sort*/
/*
int partition(int *nums,int start,int end){
    int pivot=nums[start];
    int i=start;
    int j=end;
    while(i<j){
        while(nums[i]<=pivot && i<end){
            i++;
        }
        while(nums[j]>pivot && j>start){
            j--;
        }
        if(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
            int temp=nums[j];
            nums[j]=pivot;
            nums[start]=temp;
    return j;
}
void quickSort(int *nums,int start,int end){
        if(start<end){
            int pi=partition(nums,start,end);
            quickSort(nums,start,pi-1);
            quickSort(nums,pi+1,end);
        }
}
int findContentChildren(int* g, int gSize, int* s, int sSize) {
    quickSort(g,0,gSize-1);
    quickSort(s,0,sSize-1);
    int result=0;
    int i=0,j=0;
    while(i<sSize && j<gSize){
        if(s[i]>=g[j]){
            result++;
            j++;
        }
            i++;
    }
    return result;
}    */
/*
void shellsort(int a[], int n)
 {
    int gap, j, k;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (j = gap; j < n; j++) 
        {
            for (k = j - gap; k >= 0; k -= gap)
           {
                if (a[k + gap] >= a[k])
                    break;
                else 
                {
                    int temp = a[k];
                    a[k] = a[k + gap];
                    a[k + gap] = temp;
                }
            }
        }
    }
}

int findContentChildren(int g[], int gs, int s[], int ss) 
{
    shellsort(g, gs);
    shellsort(s, ss);
    int i = 0, j = 0;  
    while (j < gs && i < ss) 
    {
        if (s[i] >= g[j]) 
        {
            j++;
        }
        i++;
    }
    return j;
}             */

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);

    int childIdx = 0, cookieIdx = 0, count = 0;
    while(childIdx < gSize && cookieIdx < sSize) {
        if (g[childIdx] <= s[cookieIdx]) {
            count++;
            childIdx++;
        }
        cookieIdx++;
    }

    return count;
}