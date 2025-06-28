
typedef struct {
    int index;
    int value;
} Pair;
/*
int compareValueDesc(const void* a, const void* b) {
    return ((Pair*)b)->value - ((Pair*)a)->value;
}

int compareIndexAsc(const void* a, const void* b) {
    return ((Pair*)a)->index - ((Pair*)b)->index;
}
*/
bool compareValueDesc(const Pair& a, const Pair& b){
    return a.value>b.value;
}

bool compareIndexAsc(const Pair& a, const Pair& b){
    return a.index<b.index;
}
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
//  int numsSize=sizeof(nums)/sizeof(nums[0]);
        int numsSize=nums.size();
// Pair* vals = (Pair*)malloc(numsSize * sizeof(Pair));  // auxiliary array
    vector<Pair> vals(numsSize);
    for (int i = 0; i < numsSize; ++i) {
        vals[i].index = i;
        vals[i].value = nums[i];
    }
    
        // sort by numerical value in descending order
 //   qsort(vals, numsSize, sizeof(Pair), compareValueDesc);

    // Sort by value descending
    sort(vals.begin(), vals.end(), compareValueDesc);

    // select the first k elements and sort them in ascending order by index
//    qsort(vals, k, sizeof(Pair), compareIndexAsc);

        // Keep the top k elements
        vals.resize(k);
    sort(vals.begin(),vals.end(),compareIndexAsc);

//    int* res = (int*)malloc(k * sizeof(int));  // target subsequence
        vector<int> res;
/*    for (int i = 0; i < k; ++i) {
        res[i] = vals[i].value;
    }
    *returnSize = k;
    free(vals); */
    for (const auto&p:vals )
    res.push_back(p.value);
    return res; 
    }
}; 
/*
#include <vector>
#include <algorithm>

using namespace std;

struct Pair {
    int index;
    int value;
};

// Comparison functions
bool compareValueDesc(const Pair& a, const Pair& b) {
    return a.value > b.value;
}

bool compareIndexAsc(const Pair& a, const Pair& b) {
    return a.index < b.index;
}

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<Pair> pairs(n);

        // Pair each element with its index
        for (int i = 0; i < n; ++i) {
            pairs[i] = {i, nums[i]};
        }

        // Sort by value descending
        sort(pairs.begin(), pairs.end(), compareValueDesc);

        // Keep the top k elements
        pairs.resize(k);

        // Sort those k elements by original index
        sort(pairs.begin(), pairs.end(), compareIndexAsc);

        // Extract values
        vector<int> result;
        for (const auto& p : pairs) {
            result.push_back(p.value);
        }

        return result;
    }
};
*/