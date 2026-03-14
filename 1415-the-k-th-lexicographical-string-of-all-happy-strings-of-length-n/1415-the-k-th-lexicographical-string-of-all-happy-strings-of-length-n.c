char* dfs(char* prefix, int n, int n2, int* k) {
    if (n == 0)
        return prefix;
    for (char c = 'a'; c <= 'c'; c++) {
        int len = strlen(prefix);
        if (len > 0 && c == prefix[len - 1])
            continue;
        int cnt = (int) pow(2, n2 - len - 1);
        if (cnt >= *k) {
            prefix[len] = c;
            prefix[len + 1] = '\0';
            return dfs(prefix, n - 1, n2, k);
        } else
            *k -= cnt;
    }
    return "";
}

char* getHappyString(int n, int k) {
    int n2 = n;
    char* prefix = (char*) malloc((n + 1) * sizeof(char));
    prefix[0] = '\0';
    return dfs(prefix, n, n2, &k);
}