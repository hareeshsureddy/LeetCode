    int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
int matchPlayersAndTrainers(int* g, int gSize, int* s, int sSize) {
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);

    int childIdx = 0, cookieIdx = 0, count = 0;
    while(childIdx < gSize && cookieIdx < sSize) {
        if (g[childIdx] <= s[cookieIdx]) {
            count++;
            childIdx++;
        }
        cookieIdx++;
    }

    return count;
}