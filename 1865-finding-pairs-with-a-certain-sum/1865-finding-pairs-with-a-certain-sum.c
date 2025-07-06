#define HASH_SIZE 131071

typedef struct HashNode {
    int key;
    int count;
    struct HashNode* next;
} HashNode;

typedef struct {
    int* nums1;
    int nums1Size;
    int* nums2;
    int nums2Size;
    HashNode* hashbrown[HASH_SIZE];
} FindSumPairs;

int hashFunc(int key)
{
    unsigned int x = (unsigned int)key;
    return x % HASH_SIZE;
}

void hashInsert(HashNode** hashbrown, int key, int delta)
{
    int index = hashFunc(key);
    HashNode* curr = hashbrown[index];

    while (curr)
    {
        if (curr->key == key)
        {
            curr->count += delta;
            return;
        }
        curr = curr->next;
    }

    HashNode* newNode = (HashNode*)malloc(sizeof(HashNode));
    newNode->key = key;
    newNode->count = delta;
    newNode->next = hashbrown[index];
    hashbrown[index] = newNode;
}

int hashGet(HashNode** hashbrown, int key)
{
    int index = hashFunc(key);
    HashNode* curr = hashbrown[index];

    while (curr)
    {
        if (curr->key == key)
        {
            return curr->count;
        }
        curr = curr->next;
    }
    return 0;
}

void hashFree(HashNode** hashbrown)
{
    for (int i = 0; i < HASH_SIZE; ++i)
    {
        HashNode* curr = hashbrown[i];
        while (curr)
        {
            HashNode* temp = curr;
            curr = curr->next;
            free(temp);
        }
        hashbrown[i] = NULL;
    }
}

FindSumPairs* findSumPairsCreate(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    FindSumPairs* obj = (FindSumPairs*)malloc(sizeof(FindSumPairs));
    obj->nums1Size = nums1Size;
    obj->nums2Size = nums2Size;

    obj->nums1 = (int*)malloc(sizeof(int) * nums1Size);
    obj->nums2 = (int*)malloc(sizeof(int) * nums2Size);

    memcpy(obj->nums1, nums1, sizeof(int) * nums1Size);
    memcpy(obj->nums2, nums2, sizeof(int) * nums2Size);

    memset(obj->hashbrown, 0, sizeof(obj->hashbrown));

    for (int i = 0; i < nums2Size; ++i)
    {
        hashInsert(obj->hashbrown, nums2[i], 1);
    }

    return obj;
}

void findSumPairsAdd(FindSumPairs* obj, int index, int val)
{
    int oldVal = obj->nums2[index];
    hashInsert(obj->hashbrown, oldVal, -1);

    obj->nums2[index] += val;

    int newVal = obj->nums2[index];
    hashInsert(obj->hashbrown, newVal, 1);
}

int findSumPairsCount(FindSumPairs* obj, int tot)
{
    int result = 0;
    for (int i = 0; i < obj->nums1Size; ++i)
    {
        int complement = tot - obj->nums1[i];
        result += hashGet(obj->hashbrown, complement);
    }
    return result;
}

void findSumPairsFree(FindSumPairs* obj)
{
    if (!obj)
        return;

    free(obj->nums1);
    free(obj->nums2);
    hashFree(obj->hashbrown);
    free(obj);
}

/**
 * Your FindSumPairs struct will be instantiated and called as such:
 * FindSumPairs* obj = findSumPairsCreate(nums1, nums1Size, nums2, nums2Size);
 * findSumPairsAdd(obj, index, val);
 
 * int param_2 = findSumPairsCount(obj, tot);
 
 * findSumPairsFree(obj);
*/