int isPrefixOfWord(char* sentence, char* searchWord) {
    // int len=strlen(sentence);
    int idx = 0;
    int isPrefixOfWord = 0;
    while (sentence[idx]) {
        int i = 0;
        isPrefixOfWord++;
        while (searchWord[i] && sentence[idx] && sentence[idx] != ' ') {
            if (sentence[idx] != searchWord[i])
                break;
            idx++;
            i++;
        }
        if (!searchWord[i])
            return isPrefixOfWord;
        else
            while (sentence[idx] && sentence[idx] != ' ')
                idx++;
        if (!sentence[idx])
            return -1;
        idx++;
    }
    return -1;
}