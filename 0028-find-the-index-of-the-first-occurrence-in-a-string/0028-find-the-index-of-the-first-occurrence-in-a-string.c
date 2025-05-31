int strStr(char* haystack, char* needle) {
    int result=(int)strstr(haystack,needle);
    if(result)
    return (int)result-(int)haystack;
    else return -1;
}