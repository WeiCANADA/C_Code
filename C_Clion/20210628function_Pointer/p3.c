//
// Created by ThinkPad on 2021-07-02.
//
//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
//�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
//������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
//����������Ӧ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Stu* p;

//��ͳð��������
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

//qsort �⺯��������ıȽϺ���int compare (const void* p1, const void* p2);
int compare_int(const void *p1, const void *p2) {
    return (*(int *) p1 - *(int *) p2);
}


//int ��������
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

//float��������
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

//�ṹ����������
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