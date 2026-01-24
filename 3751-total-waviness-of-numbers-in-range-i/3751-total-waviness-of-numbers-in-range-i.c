int totalWaviness(int num1, int num2) {
    int totalWaviness = 0;
    for (int i = num1; i <= num2; i++) {
        int num=i;
        while (num > 100) {
            int rD = num % 10;
            num=num/10;
            int mD = num % 10;
            int lD = (num / 10) % 10;
            if (mD < lD && mD < rD) {
                totalWaviness++;
            } else if (mD > lD && mD > rD) {
                totalWaviness++;
            }
        }
    }
    return totalWaviness;
}