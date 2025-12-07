

int countOdds(int low, int high){
        int countOdds=high-(high/2);
        countOdds-=low-(low/2);
        if(low%2)
        countOdds++;
        return countOdds;
}