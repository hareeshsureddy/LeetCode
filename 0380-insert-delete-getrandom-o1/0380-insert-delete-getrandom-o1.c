typedef struct
{
    int *arr,index,len;
} RandomizedSet;

/* int hrand(){
    int val;
    return val;
} */
RandomizedSet* randomizedSetCreate()
{
    RandomizedSet *set=(RandomizedSet*)malloc(sizeof(RandomizedSet));
    set->arr=NULL;
    set->len=0;
    srand(time(NULL));
    return set;
}

bool randomizedSetInsert(RandomizedSet* obj, int val)
{
    if(obj->arr==NULL)
    {
        obj->len=1;
        obj->arr=(int*)malloc(obj->len*sizeof(int));
        obj->index=0;
    }

    for(int i=0;i<obj->index;i++)
    {
        if(obj->arr[i]==val)
        {
            return false;
        }
    }

    if(obj->index==obj->len)
    {
        obj->len+=1;
        obj->arr=(int*)realloc(obj->arr,obj->len*sizeof(int));
    }
    obj->arr[obj->index++]=val;
    return true;
}

bool randomizedSetRemove(RandomizedSet* obj, int val)
{
    if(obj->index==0)
    {
        return false;
    }

    for(int i=0;i<obj->index;i++)
    {
        if(obj->arr[i]==val)
        {
            obj->arr[i]=obj->arr[obj->index-1];
            obj->index--;
            return true;
        }
    }
    return false;
}

int randomizedSetGetRandom(RandomizedSet* obj)
{
    if(obj->index==0)
    {
        return -1;
    }
    int randomIndex=rand()%obj->index;
    //int randomIndex=hrand()%obj->index;
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