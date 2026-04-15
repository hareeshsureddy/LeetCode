int closestTarget(char** words, int wordsSize, char* target, int startIndex) {
    int closestTarget=INT_MAX;
    for(int i=0;i<wordsSize;i++){
        if(!strcmp(target,words[i])){
            int d=abs(startIndex-i);
              closestTarget=fmin(closestTarget,fmin(d,(wordsSize-d)));
        }
    }
    return (closestTarget==INT_MAX)?-1:closestTarget;
}