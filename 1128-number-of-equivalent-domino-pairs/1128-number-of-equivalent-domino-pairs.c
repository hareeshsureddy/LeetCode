int numEquivDominoPairs(int **dominoes, int dominoesSize,int *colsize_1) {
	int pair_cnt=0;
	for (int i=0; i<dominoesSize-1; i++) {
		for (int j=i+1; j<dominoesSize; j++) {
			pair_cnt+=(dominoes[i][0]==dominoes[j][0])?(dominoes[i][1]==dominoes[j][1]):(dominoes[i][1]==dominoes[j][0])?(dominoes[i][0]==dominoes[j][1]):0;
		}
	}
	return pair_cnt;
}