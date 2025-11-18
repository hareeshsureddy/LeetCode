bool isOneBitCharacter(int* bits, int bitsSize) {
   if(bitsSize==1) return true;
   int i=0;
    while(i<bitsSize-1){
        if(bits[i]==1) {
            if(i<bitsSize-2)
            i+=1;
            else
            return false;
        }
        i++;
    }
    return true;
}