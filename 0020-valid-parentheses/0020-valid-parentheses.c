/* bool isValid(char* s) {
   char stack[strlen(s)];
   int top=-1;
   for (int i=0;s[i];i++){
    switch(s[i]){
        case '(':
        case '{':
        case '[':
        stack[++top]=s[i];
        break;
        case ')':
        if(stack[top]=='(' && top!=-1)
        top--;
        else
        return false;
        break;
        case '}':
        if(stack[top]=='}' && top!=-1)
        top--;
        else
        return false;
        break;
        case ']':
        if(stack[top]==']' && top!=-1)
        top--;
        else
        return false;
        break;
        default:
    }
   }
   return (top==-1);
} */

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char * s) {
    char stack[strlen(s)];
    int top = -1;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i]; // Push opening bracket
        } else {
            if (top == -1 || 
               (s[i] == ')' && stack[top] != '(') || 
               (s[i] == '}' && stack[top] != '{') || 
               (s[i] == ']' && stack[top] != '[')) {
                return false; // Invalid if no match
            }
            top--; // Pop the matching opening bracket
        }
    }
    return top == -1; // Valid if stack is empty
}