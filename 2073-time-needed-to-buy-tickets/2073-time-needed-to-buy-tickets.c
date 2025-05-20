int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int sec=0;
    while(tickets[k]){
        for (int i=0;i<ticketsSize;i++){
            if(tickets[i]){
                tickets[i]--;
                sec++;
            }
            if (tickets[k]==0) break;
        }
    }
    return sec;
}