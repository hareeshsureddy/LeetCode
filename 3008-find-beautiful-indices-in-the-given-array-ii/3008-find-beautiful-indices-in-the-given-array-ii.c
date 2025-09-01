

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
static uint32_t i_index[100001];
static uint32_t j_index[100001];
// Binary search lower_bound in C
int lower_bound(int arr[], int size, int target) {
    int left = 0, right = size;  // right = size (one past last)
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left; // index of first element >= target
}
int* beautifulIndices(char* s, char* a, char* b, int k, int* returnSize) {
    int i,j;
    char *ptr=NULL;
    int len=strlen(s);
    int len1=strlen(a);
    int len2=strlen(b);
    int offset=0;
    int index_i=0,index_j=0;
    while(offset<len){
    ptr=strstr(s+offset,a);
        if(ptr){
            i=ptr-s;
            offset=i+1;//len1;
            i_index[index_i++]=i;
        }else
        break;
    }
    int *res=(int*)malloc(sizeof(int)*index_i);
    if(!index_i){
    *returnSize=0;
     return res;
    }
    offset=0;
    while(offset<len){
    ptr=strstr(s+offset,b);
        if(ptr){
            j=ptr-s;
            offset=j+1;//len2;
            j_index[index_j++]=j;
        }else
        break;
    }
    if(!index_j){
    *returnSize=0;
     return res;
    }
    int index=0;
  /*  for(int i=0;i<index_i;i++){
       // printf("%d ",i_index[i]);
        for(int j=0;j<index_j;j++){
           // printf("%d ",j_index[j]);
            if(abs(i_index[i]-j_index[j])<=k){
                    res[index++]=i_index[i];
                    break;
            }
        }
    } */
    /*
    int right=j_index[index_j-1];
    int left=j_index[0];
        for(int i=0;i<index_i;i++){
            int right_limit=fmin(len-1,(i_index[i]+k));
            int left_limit=fmax(0,(i_index[i]-k));
            int pos = lower_bound(j_index, index_j, left_limit);
            if(pos < index_j && j_index[pos] <= right_limit){
                    res[index++]=i_index[i];
            }
        }
    *returnSize=index;
    return res;

} */

static void buildNexts(
	const char * const needle,
	const int needleLen,
	int * const nexts
){
	assert(needleLen >= 1);

	nexts[0] = 0;
	for (int i = 1; i < needleLen; i += 1){
		int last = nexts[i - 1];
		while (1){
			if (needle[last] == needle[i]){
				nexts[i] = last + 1;
				break;
			}

			if (0 == last){
				nexts[i] = 0;
				break;
			}

			last = nexts[last - 1];
		}
	}
}

int * strStrAll(
	const char * const hayStack,
	const char * const needle,

	int * const pRetsLen
){
	const int needleLen = strlen(needle);
	assert(needleLen >= 1);
	int nexts[needleLen];
	buildNexts(needle, needleLen, nexts);

	const int hayStackLen = strlen(hayStack);

	int * const rets = (int *)malloc(sizeof (int) * hayStackLen);
	*pRetsLen = 0;

	for (int i = 0, j = 0; i < hayStackLen; ){
		if (hayStack[i] == needle[j]){
			i += 1;
			j += 1;

			if (needleLen == j){
				rets[*pRetsLen] = i - j;
				*pRetsLen += 1;

				j = nexts[j - 1];
			}
		}else {
			if (0 == j){
				i += 1;
			}else {
				j = nexts[j - 1];
			}
		}
	}

	return rets;
}

//-------- --------

int * beautifulIndices(
	const char * const hayStack,
	const char * const needle1,
	const char * const needle2,
	const int maxDiff,

	int * const pRetsLen //out
){
	int needle2IdxsLen;
	int * needle2Idxs = strStrAll(hayStack, needle2, &needle2IdxsLen);

	int needle1IdxsLen;
	int * needle1Idxs = strStrAll(hayStack, needle1, &needle1IdxsLen);

	int * const rets = (int *)malloc(sizeof (int) * needle1IdxsLen);
	*pRetsLen = 0;

	int first = 0, nextOfLast = 0;
	for (int i = 0; i < needle1IdxsLen; i += 1){
		const int cur = needle1Idxs[i];

		const int min = cur - maxDiff;
		while (
			first < needle2IdxsLen &&
			needle2Idxs[first] < min
		){
			first += 1;
		}

		const int max = cur + maxDiff;
		while (
			nextOfLast < needle2IdxsLen &&
			needle2Idxs[nextOfLast] <= max
		){
			nextOfLast += 1;
		}

		if (nextOfLast - first >= 1){
			rets[*pRetsLen] = cur;
			*pRetsLen += 1;
		}
	}

	free(needle2Idxs);
	needle2Idxs = NULL;

	free(needle1Idxs);
	needle1Idxs = NULL;

	return rets;
}