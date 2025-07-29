int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int res=0;
    for (int i=0;i<hoursSize;i++){
        if(hours[i]>=target)   res++;
    }
    return res;
}