#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int len = 0;

    printf("Enter any string: ");
    gets(str);     
    p = str;        

    while (*p != '\0') {  
        len++;     
        p++;       
    }

    printf("The length of a string is: %d", len);

    return 0;
}
