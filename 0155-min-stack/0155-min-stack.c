
typedef struct {
    int val;
    int min;
} data_t;

typedef struct {
    int capacity;
    int size;
    data_t *buf;
} MinStack;
/*
#define min(a, b) ({ \
    __typeof__(a) _a = a; \
    __typeof__(b) _b = b; \
    (_a < _b) ? _a : _b; \
})
*/
#define min(a,b)   (a < b) ? a : b
MinStack* minStackCreate() {
    MinStack* obj = malloc(sizeof(MinStack));
    const int capacity = 30000;

    obj->capacity = capacity;
    obj->size = 0;
    obj->buf = (data_t *)malloc(sizeof(*obj->buf) * (capacity + 1)) + 1;
    obj->buf[-1].min = INT_MAX;
    
    return obj;
}

static void minStackResize(MinStack* obj, int size) {
    obj->capacity = size;
    obj->buf = (data_t *)realloc(obj->buf - 1, sizeof(*obj->buf) * (size + 1)) + 1;
}

void minStackPush(MinStack* obj, int val) {
    if (obj->size == obj->capacity)
        minStackResize(obj, obj->capacity << 1);
    
    const int idx = obj->size;
    obj->size++;
    obj->buf[idx] = (data_t){ .val = val, .min = min(val, obj->buf[idx-1].min) };
}

void minStackPop(MinStack* obj) {
    obj->size--;
}

int minStackTop(MinStack* obj) {
    return obj->buf[obj->size-1].val;
}

int minStackGetMin(MinStack* obj) {
    return obj->buf[obj->size-1].min;
}

void minStackFree(MinStack* obj) {
    free(obj->buf - 1);

    obj->buf = NULL;
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/