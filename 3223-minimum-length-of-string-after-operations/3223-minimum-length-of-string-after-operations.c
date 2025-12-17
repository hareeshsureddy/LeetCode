int minimumLength(char* s) {
    int minimumLength = 0;
    int map[26] = {0};
    for (int i = 0; s[i]; i++) {
        map[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (map[i]) {
            if (map[i] & 1)
                minimumLength += 1;
            else
                minimumLength += 2;
        }
    }
    return minimumLength;
}