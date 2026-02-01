char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int idx=0;
    for(int i=0;i<lettersSize;i++){
        if(letters[i]>target){
            idx=i;
            break;
        }
    }
    return letters[idx];
}