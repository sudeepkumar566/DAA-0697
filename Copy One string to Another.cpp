#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "Hello, world!";
    char str2[20]; 
    strcpy(str2, str1);
    printf("STRING 1: %s\n", str1);
    printf("STRING 2: %s\n", str2);
    
    return 0;
}

