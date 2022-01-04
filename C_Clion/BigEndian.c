//
// Created by Wei on 2022-01-04.
//
#include <stdio.h>
int check_sys1() {
    union U {
        char c;
        int i;
    } u;

    u.i = 1;
    return u.c;
}
int check_sys()
{
    int i = 1;
   return *(char*)&i;
}

int main()

{
    printf("%zd\n", sizeof(int));
    //int ret = check_sys();
    int ret = check_sys1();
    if(ret == 1){
        printf("Little Endian\n");
    } else{
        printf("Big Endian\n");
    }
    return 0;
}