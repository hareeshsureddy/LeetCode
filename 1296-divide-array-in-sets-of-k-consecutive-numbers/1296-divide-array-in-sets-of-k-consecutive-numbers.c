

int compare(const void* a, const void* b) { return *(int*)a - *(int*)b; }

bool isPossibleDivide(int* hand, int handSize, int groupSize) {
    if (handSize % groupSize)
        return false;
    qsort(hand, handSize, sizeof(int), compare);
    int noofGrps = handSize / groupSize;
    int j, k = 0;
    for (int i = 0; i < noofGrps; i++) {
        j = k;
        while (j < handSize && hand[j] < 0)
            j++;
        k = j;
        int next = hand[j] + 1;
        hand[j++] = -1;
        int n = groupSize - 1;
        while (n && j < handSize) {
            if (hand[j] > next)
                return false;
            else if (hand[j] == next) {
                n--;
                next++;
                hand[j] = -1;
            }
            j++;
        }
        if (n)
            return false;
    }

    return true;
}