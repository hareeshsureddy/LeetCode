int finalValueAfterOperations(char** operations, int operationsSize) {
    int x=0;
    while(operationsSize--){
        if(operations[operationsSize][1]=='+') ++x;
        else --x;
    }
    return x;
}