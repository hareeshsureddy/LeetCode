
#define hareesh     0xFF
/*
int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    #if (hareesh==0x00)
        // allowedBits will represent the bitmask of allowed characters
        int allowedBits = 0;

        // Set the corresponding bit for each character in allowed
        for (int i = 0;allowed[i]!='\0'; i++) {
            allowedBits |= 1 << (allowed[i] - 'a');
        }

        int consistentCount = 0;

        // Iterate through each word in the words array
       for (int i = 0;i<wordsSize; i++) {
            bool isConsistent = true;

            // Check each character in the word
            for (int j = 0; words[i][j]!='\0'; j++) {
                // Calculate the bit position for the current character
                int bit = (allowedBits >> (words[i][j] - 'a')) & 1;

                // If the bit is 0, the character is not allowed
                if (bit == 0) {
                    isConsistent = false;
                    break;
                }
            }
        #else
            // Create a vector to mark which characters are allowed
        int isAllowed[26]={0};
    memset(isAllowed,1,sizeof(isAllowed));
    int len=strlen(allowed);
        // Mark all characters in 'allowed' as true in the isAllowed vector
         for (int i = 0;i<len; i++) {
            isAllowed[allowed[i] - 'a'] = false;
        }

        int consistentCount = 0;

        // Iterate through each word in the words array
         for (int i = 0;i<wordsSize; i++) {
           // bool isConsistent = true;

            // Check each character of the current word
            for (int j = 0;words[i][j]!='\0'; j++) {
                // If any character is not allowed, mark as inconsistent and
                // break
                if (isAllowed[words[i][j] - 'a']) {
                    consistentCount++;
                    //isConsistent = false;
                    break;
                }
            }
            #endif

            // If the word is consistent, increment the count
          //  if (isConsistent) {
        //    consistentCount++;
          //  }
        }

        return wordsSize-consistentCount;
    }*/
    int countConsistentStrings(char * allowed, char ** words, int wordsSize){
        uint32_t org=0,result=0;
        int i=0;
        while(allowed[i]){
            org|=(1<<(allowed[i]-'a'));
            i++;
        }
        i=0;
        for(;i<wordsSize;i++){
            int j=0,temp=0;
            while(words[i][j]){
            temp|=(1<<(words[i][j]-'a'));
            j++;
        }
        temp|=org;
        if(!(temp^org))
        result++;
        }
        return result;
    }