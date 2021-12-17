//
// Created by ThinkPad on 2021-07-02.
//
//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
//个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
//函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
//条件进行响应。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Stu* p;

//传统冒泡排序函数
void bubble_sort(int arr[], int sizeArr) {
    for (int i = 0; i < sizeArr - 1; i++) {
        for (int j = 0; j < sizeArr - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//qsort 库函数参数里的比较函数int compare (const void* p1, const void* p2);
int compare_int(const void *p1, const void *p2) {
    return (*(int *) p1 - *(int *) p2);
}


//int 数组排序
void test1() {
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    //bubble_sort(arr, sizeArr);
    qsort(arr, sizeArr, sizeof(arr[0]), compare_int);
    //
    for (int i = 0; i < sizeArr; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//*************************************************************
//float comparing Function
int compare_float(const void *e1, const void *e2) {
    if (*(float *) e1 > *(float *) e2) {
        return 1;
    } else if (*(float *) e1 < *(float *) e2) {
        return -1;
    } else {
        return 0;
    };
}

//float数组排序
void test2() {
    float arr[10] = {9.0, 8.1, 7.2, 6.5, 5.3, 4.4, 3.3, 2.2, 1.9, 0.5};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    //bubble_sort(arr, sizeArr);
    qsort(arr, sizeArr, sizeof(arr[0]), compare_float);
    for (int i = 0; i < sizeArr; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}

//*************************************************************
// struct comparing function
struct Stu {
    char name[20];
    int age;
};
int compare_stu_by_age(const void *e1, const void *e2) {
    return ((struct Stu *) e1) -> age - ((struct Stu *) e2) -> age;
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int compare_stu_by_name(const void *e1, const void *e2)
{
   return strcmp( ((struct Stu *) e1)->name , ((struct Stu *) e2) -> name );
}

//结构体类型排序
void test3() {


    struct Stu s[3] = {
            {"Zhang,San", 30},
            {"Li,Si",     20},
            {"Wang,Wu",   19}
    };
    int size = sizeof(s) / sizeof(s[0]);

    qsort(s, size, sizeof(s[0]), compare_stu_by_age);
    qsort(s, size, sizeof(s[0]), compare_stu_by_name);
}

int main() {
    // test1();
    //test2();
    test3();


    return 0;
}