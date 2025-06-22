typedef struct
{
    int *arr,size,capacity;
} RandomizedSet;

RandomizedSet* randomizedSetCreate()
{
    RandomizedSet *set=(RandomizedSet*)malloc(sizeof(RandomizedSet));
    set->arr=NULL;
    set->capacity=0;
    srand(time(NULL));
    return set;
}

bool randomizedSetInsert(RandomizedSet* obj, int val)
{
    if(obj->arr==NULL)
    {
        obj->capacity=1;
        obj->arr=(int*)malloc(obj->capacity*sizeof(int));
        obj->size=0;
    }

    for(int i=0;i<obj->size;i++)
    {
        if(obj->arr[i]==val)
        {
            return false;
        }
    }

    if(obj->size==obj->capacity)
    {
        obj->capacity*=2;
        obj->arr=(int*)realloc(obj->arr,obj->capacity*sizeof(int));
    }
    obj->arr[obj->size++]=val;
    return true;
}

bool randomizedSetRemove(RandomizedSet* obj, int val)
{
    if(obj->size==0)
    {
        return false;
    }

    for(int i=0;i<obj->size;i++)
    {
        if(obj->arr[i]==val)
        {
            obj->arr[i]=obj->arr[obj->size-1];
            obj->size--;
            return true;
        }
    }
    return false;
}

int randomizedSetGetRandom(RandomizedSet* obj)
{
    if(obj->size==0)
    {
        return -1;
    }
    int randomIndex=rand()%obj->size;
    return obj->arr[randomIndex];
}

void randomizedSetFree(RandomizedSet* obj)
{
    free(obj->arr);
    free(obj);
}

/**
 * Your RandomizedSet struct will be instantiated and called as such:
 * RandomizedSet* obj = randomizedSetCreate();
 * bool param_1 = randomizedSetInsert(obj, val);
 
 * bool param_2 = randomizedSetRemove(obj, val);
 
 * int param_3 = randomizedSetGetRandom(obj);
 
 * randomizedSetFree(obj);
*/