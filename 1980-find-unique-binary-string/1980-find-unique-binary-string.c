
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* generateBinaryStrings(char* current, char** nums, int numsSize, int n) {
    if (strlen(current) == n) {
        for (int i = 0; i < numsSize; i++) {
            if (strcmp(nums[i], current) == 0) {
                return NULL;
            }
        }
        return strdup(current);
    }

    char* result;
    char newStr[n + 1];

    strcpy(newStr, current);
    strcat(newStr, "0");
    result = generateBinaryStrings(newStr, nums, numsSize, n);
    if (result) return result;

    strcpy(newStr, current);
    strcat(newStr, "1");
    result = generateBinaryStrings(newStr, nums, numsSize, n);
    if (result) return result;

    return NULL;
}

char* findDifferentBinaryString(char** nums, int numsSize) {
    char current[numsSize + 1];
    current[0] = '\0';
    return generateBinaryStrings(current, nums, numsSize, numsSize);
}
