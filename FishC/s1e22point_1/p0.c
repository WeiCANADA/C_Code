#include <stdio.h>
#define MAX 1024

int main()
{
    char str[MAX];
    char *ps = &str[0]//*ps = str;
    int length = 0;

    printf("Input a String:");
    fgets(str, MAX, stdin);
    while( *ps++ != '\n'){
        length++;
        if(*ps == ' ')
        {
            length--;
        }
    }

    printf("String is:%s\n", str);
    printf("length is:%d", length);

    return 0;
}