/* char* addStrings(char* num1, char* num2) {
    long long num_1=0,num_2=0;
    char *result=(char*)malloc(30*sizeof(char));
    int mf=1;
    int len=strlen(num1)-1;
    while(len>=0){
        num_1+=(num1[len--]-'0')*mf;
        mf*=10;
    }
    mf=1;
    len=strlen(num2)-1;
    while(len>=0){
        num_2+=(num2[len--]-'0')*mf;
        mf*=10;
    }
    sprintf(result,"%lld",(num_1+num_2));
    return result;
} */
char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1, j = strlen(num2) - 1, carry = 0;
    char* ans = (char*)malloc(10001 * sizeof(char)); 

    int k = 0; 

    while (i >= 0 || j >= 0 || carry == 1) {
        if (i >= 0) {
            carry += num1[i] - '0';
            i--;
        }
        if (j >= 0) {
            carry += num2[j] - '0';
            j--;
        }
        ans[k] = (carry % 10) + '0';
        carry /= 10;
        k++;
    }

    ans[k] = '\0'; 
    for (int m = 0, n = k - 1; m < n; m++, n--) {
        char temp = ans[m];
        ans[m] = ans[n];
        ans[n] = temp;
    }

    return ans;
}