bool detectCapitalUse(char* word) {  
 /*   All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google". */
        int indexx=(word[0]-'a');
        indexx=(indexx>=0)?2:1;
        if(indexx==1 && word[1]){
        indexx=(word[1]-'A');
        indexx=(indexx<26)?1:2;            
        }
        int i=1;
    switch(indexx){
        case 1:{
             while(word[i]){
                if((word[i]-'A')>25) return false;
                i++;
            }  
        }
        break;
        case 2:
        {
            while(word[i]){
                if((word[i]-'a')<0) return false;
                i++;
            }
        }
        break;
        default:
        break;
    }
    return true;
}