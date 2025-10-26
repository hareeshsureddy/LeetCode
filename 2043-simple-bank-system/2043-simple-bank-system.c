


typedef struct {
    long long *Accounts;
    int maxAcount;
} Bank;


Bank* bankCreate(long long* balance, int balanceSize) {
     Bank *BankData=(Bank*)malloc(sizeof(Bank));
     BankData->Accounts=balance;
     BankData->maxAcount=balanceSize;
     return BankData;
}

bool bankTransfer(Bank* obj, int account1, int account2, long long money) {
    if(obj->maxAcount<account1 || obj->maxAcount<account2) return false;
    if(obj->Accounts[account1-1]<money) return false;
    obj->Accounts[account1-1]-=money;
    obj->Accounts[account2-1]+=money;
    return true;
}

bool bankDeposit(Bank* obj, int account, long long money) {
    if(obj->maxAcount<account) return false;
    obj->Accounts[account-1]+=money;
    return true;
}

bool bankWithdraw(Bank* obj, int account, long long money) {
    if(obj->maxAcount<account) return false;
    if(obj->Accounts[account-1]<money) return false;
    obj->Accounts[account-1]-=money;  
    return true;
}

void bankFree(Bank* obj) {
    free(obj);
}

/**
 * Your Bank struct will be instantiated and called as such:
 * Bank* obj = bankCreate(balance, balanceSize);
 * bool param_1 = bankTransfer(obj, account1, account2, money);
 
 * bool param_2 = bankDeposit(obj, account, money);
 
 * bool param_3 = bankWithdraw(obj, account, money);
 
 * bankFree(obj);
*/