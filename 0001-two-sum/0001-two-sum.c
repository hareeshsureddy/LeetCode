/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        int *result=(int*)malloc(2*sizeof(int));
        *returnSize=2;
    //     T.C O(n^2)

        for (int i=0;i<numsSize-1;i++){
            for (int j=i+1;j<numsSize;j++){
                if((nums[i]+nums[j])==target){
                    result[0]=i;
                    result[1]=j;
                    return result;
                }
            }
        }
        return result;
}
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

   /**
C solution in O(n) time, using open addressing hash table.
*/
/*
#define SIZE 50000

int hash(int key) {
    int r = key % SIZE;
    return r < 0 ? r + SIZE : r;
}

void insert(int *keys, int *values, int key, int value) {
    int index = hash(key);
    while (values[index]) {
        index = (index + 1) % SIZE;
    }
    keys[index] = key;
    values[index] = value;
}

int search(int *keys, int *values, int key) {
    int index = hash(key);
    while (values[index]) {
        if (keys[index] == key) {
            return values[index];
        }
        index = (index + 1) % SIZE;
    }
    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int keys[SIZE];
    int values[SIZE] = {0};
    for (int i = 0; i < numsSize; i++) {
        int complements = target - nums[i];
        int value = search(keys, values, complements);
        if (value) {
            int *indices = (int *) malloc(sizeof(int) * 2);
            indices[0] = value - 1;
            indices[1] = i;
            return indices;
        }
        insert(keys, values, nums[i], i + 1);
    }
    return NULL;
}
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int *result=(int*)malloc(2*sizeof(int));
	*returnSize=2;
	//     T.C O(n^2)
	/*
	     for (int i=0;i<numsSize-1;i++){
	         for (int j=i+1;j<numsSize;j++){
	             if((nums[i]+nums[j])==target){
	                 result[0]=i;
	                 result[1]=j;
	                 return result;
	             }
	         }
	     }
	 */
	// Error try
	uint16_t *Pve_map=(uint16_t*)calloc(1000000001,sizeof(uint16_t));
	uint16_t *Nve_map=(uint16_t*)calloc(1000000001,sizeof(uint16_t));
	int Num_index;
	for (int i=0; i<numsSize; i++) {
		Num_index=target-nums[i];
      if(Num_index<-1000000000 || Num_index>1000000000 )
		continue;
	//	printf("Diff= %d \n",Num_index);
		if(Num_index>=0) {
			if(Pve_map[Num_index]) {
	//		    printf(" ** %d **",Pve_map[Num_index]);
				result[0]=Pve_map[Num_index]-1;
				result[1]=i;
				return result;
			}
			if(nums[i]>=0)
			Pve_map[nums[i]]=i+1;
			else
			Nve_map[abs(nums[i])]=i+1;
	//		printf("Num: %d Index: %d\n",nums[i],Pve_map[nums[i]]);
		}
		else {
			Num_index=abs(Num_index);
			if(Nve_map[Num_index]) {
				result[1]=i;
				result[0]=Nve_map[Num_index]-1;
				return result;
			}
			if(nums[i]>=0)
			Pve_map[nums[i]]=i+1;
			else
			Nve_map[abs(nums[i])]=i+1;
		}

	}
	free(Nve_map);
	free(Pve_map);

	return result;
}