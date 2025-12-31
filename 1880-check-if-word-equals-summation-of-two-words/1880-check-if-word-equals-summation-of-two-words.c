bool isSumEqual(char* firstWord, char* secondWord, char* targetWord) {
    int numericalfirstWord=0;
    int numericalsecondWord=0;
    int numericaltargetWord=0;
    for(int i=0;firstWord[i];i++){
        numericalfirstWord*=10;
        numericalfirstWord+=firstWord[i]-'a';
    }
    for(int i=0;secondWord[i];i++){
        numericalsecondWord*=10;
        numericalsecondWord+=secondWord[i]-'a';
    }
    for(int i=0;targetWord[i];i++){
        numericaltargetWord*=10;
        numericaltargetWord+=targetWord[i]-'a';
    }
    if((numericalfirstWord+numericalsecondWord)==numericaltargetWord) return true;
    return false;
}