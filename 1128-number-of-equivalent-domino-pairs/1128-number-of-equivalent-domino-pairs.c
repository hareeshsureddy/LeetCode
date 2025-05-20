int numEquivDominoPairs(int **dominoes, int dominoesSize,int *colsize_1) {
	int pair_cnt=0;
	int *map=(int*)calloc(100,sizeof(int));
	for (int i=0;i<dominoesSize;i++){
  int idx=(dominoes[i][0]<dominoes[i][1])?((((dominoes[i][0])*10)+dominoes[i][1])):((((dominoes[i][1])*10)+dominoes[i][0]));
	    if(map[idx])   pair_cnt+=map[idx];
	    map[idx]++;
	}
	return pair_cnt;
	/*
	for (int i=0; i<dominoesSize-1; i++) {
		for (int j=i+1; j<dominoesSize; j++) {
			pair_cnt+=(dominoes[i][0]==dominoes[j][0])?(dominoes[i][1]==dominoes[j][1]):(dominoes[i][1]==dominoes[j][0])?(dominoes[i][0]==dominoes[j][1]):0;
		}
	}
	return pair_cnt;
	*/
}