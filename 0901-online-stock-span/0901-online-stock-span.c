


typedef struct {
    int *stack;
    int idx;
    int size;
} StockSpanner;


StockSpanner* stockSpannerCreate() {
        StockSpanner* obj =(StockSpanner*)malloc(sizeof(StockSpanner)*1);
        obj->size=10;
        obj->stack=(int*)malloc(sizeof(int)*obj->size);
        obj->idx=0;
        return obj;
}

int stockSpannerNext(StockSpanner* obj, int price) {
    if(obj->idx>=obj->size){
        obj->size*=2;
        obj->stack=(int*)realloc(obj->stack,sizeof(int)*obj->size);
    }
    obj->stack[obj->idx++]=price;
    int span=1;
    int currentPrice=obj->stack[obj->idx-1];
    for(int i=obj->idx-2;i>=0;i--){
        if(currentPrice>=obj->stack[i]) span++;
        else
        break;
    }
    return span;
}

void stockSpannerFree(StockSpanner* obj) {
    free(obj->stack);
    free(obj);
    
}

/**
 * Your StockSpanner struct will be instantiated and called as such:
 * StockSpanner* obj = stockSpannerCreate();
 * int param_1 = stockSpannerNext(obj, price);
 
 * stockSpannerFree(obj);
*/