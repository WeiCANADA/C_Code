//C���Խṹ������

// Created by ThinkPad on 2021-06-08.
//
//����ṹ������
struct stu{
    char *name;  //����
    int num;  //ѧ��
    int age;  //����
    char group;  //����С��
    float score;  //�ɼ�
}class[5];

//�ṹ�������ڶ����ͬʱ��ʼ��
struct stu1{
    char *name;  //����
    int num;  //ѧ��
    int age;  //����
    char group;  //����С��
    float score;  //�ɼ�
}class1[5] = {
        {"����", 0001,23 , 'A', 39},
        {"����", 0002,22 , 'B', 49},
        {"����", 0003,22 , 'A', 91},
        {"������", 0004,21 , 'A', 97},
        {"����", 0005,33 , 'B', 94},
};

//����������ȫ��Ԫ�ظ�ֵʱ��Ҳ�ɲ��������鳤��
struct stu2{
    char *name;  //����
    int num;  //ѧ��
    int age;  //����
    char group;  //����С��
    float score;  //�ɼ�
}class2[] = {
        {"����", 0001,23 , 'A', 39},
        {"����", 0002,22 , 'B', 49},
        {"����", 0003,22 , 'A', 91},
        {"������", 0004,21 , 'A', 97},
        {"����", 0005,33 , 'B', 94},
};


//��ʾ��������ȫ��ѧ�����ܳɼ���ƽ���ɼ����Լ� 140 �����µ�������

#include <stdio.h>
struct{
    char *name;  //����
    int num;  //ѧ��
    int age;  //����
    char group;  //����С��
    float score;  //�ɼ�
}class3[] = {
        {"Li ping", 5, 18, 'C', 145.0},
        {"Zhang ping", 4, 19, 'A', 130.5},
        {"He fang", 1, 18, 'A', 148.5},
        {"Cheng ling", 2, 17, 'F', 139.0},
        {"Wang ming", 3, 17, 'B', 144.5}
};
int main(){
    int i, num_140 = 0;
    float sum = 0;
    for(i=0; i<5; i++){
        sum += class3[i].score;
        if(class3[i].score < 140)
        {
            num_140++;
        }
    }
    printf("sum=%.2f\naverage=%.2f\nnum_140=%d\n", sum, sum/5, num_140);
    return 0;
}