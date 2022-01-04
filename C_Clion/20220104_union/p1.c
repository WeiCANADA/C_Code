
// Created by Wei on 2022-01-04.
//
#include <stdio.h>

int check_sys() {
    union U {
        char c;
        int i;
    } u;

    u.i = 1;
    return u.c;
}

int main(){
    int ret = check_sys();
    if (ret == 1) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }
    return 0;
}



