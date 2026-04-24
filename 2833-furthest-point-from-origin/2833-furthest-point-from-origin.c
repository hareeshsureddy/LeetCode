int furthestDistanceFromOrigin(char* moves) {
    int idx = 0;
    int R = 0, L = 0, RL = 0;
    while (moves[idx]) {
        if (moves[idx] == 'L')
            L++;
        else if (moves[idx] == 'R')
            R++;
        else
            RL++;
        idx++;
    }
    if (R < L) {
        L += RL;
        return L - R;
    } else if (R > L) {
        R += RL;
        return R - L;
    }
    if (RL) {
        return RL;
    } else {
        return 0;
    }
}