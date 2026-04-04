char* decodeCiphertext(char* encodedText, int rows) {
    int len = strlen(encodedText);
    int cols = len / rows;
    int idx = 0, idxEnd = 0;
    char* res = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < cols; i++) {
        int r = 0;
        int c = i;
        while (r < rows && c < cols) {
            int j = r * cols + c;
            res[idx++] = encodedText[j];
            if (encodedText[j] != ' ')
                idxEnd = idx;
            r++;
            c++;
        }
    }
    res[idxEnd] = '\0';
    return res;
}