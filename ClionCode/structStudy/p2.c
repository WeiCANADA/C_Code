//
// Created by ThinkPad on 2021-06-08.
//
/*ָ��Ҳ����ָ��һ���ṹ�壬�������ʽһ��Ϊ��
struct �ṹ���� *������;
������һ������ṹ��ָ���ʵ����
struct stu{
    char *name;  //����
    int num;  //ѧ��
    int age;  //����
    char group;  //����С��
    float score;  //�ɼ�
} stu1 = { "Tom", 12, 18, 'A', 136.5 };
//�ṹ��ָ��
struct stu *pstu = &stu1;
Ҳ�����ڶ���ṹ���ͬʱ����ṹ��ָ�룺
struct stu{
    char *name;  //����
    int num;  //ѧ��
    int age;  //����
    char group;  //����С��
    float score;  //�ɼ�
} stu1 = { "Tom", 12, 18, 'A', 136.5 }, *pstu = &stu1;
ע�⣬�ṹ�����������������ͬ���������ڱ��ʽ�лᱻת��Ϊ����ָ�룬���ṹ����������ᣬ�������κα��ʽ������ʾ�Ķ����������ϱ���Ҫ��ȡ�ýṹ������ĵ�ַ��������ǰ���&�����Ը� pstu ��ֵֻ��д����
struct stu *pstu = &stu1;

������д����
struct stu *pstu = stu1;*/

/*��Ӧ��ע�⣬�ṹ��ͽṹ�������������ͬ�ĸ���ṹ����һ���������ͣ���һ�ִ���������ģ�壬����������Ϊ�������ڴ�ռ䣬���� int��float��char ��Щ�ؼ��ֱ���ռ���ڴ�һ�����ṹ������Ű���ʵʵ���ڵ����ݣ�����Ҫ�ڴ����洢�������д���Ǵ���ģ�������ȥȡһ���ṹ�����ĵ�ַ��Ҳ���ܽ�����ֵ������������
struct stu *pstu = &stu;
struct stu *pstu = stu;

��ȡ�ṹ���Ա
        ͨ���ṹ��ָ����Ի�ȡ�ṹ���Ա��һ����ʽΪ��
(*pointer).memberName
        ���ߣ�
pointer->memberName
        ��һ��д���У�.�����ȼ�����*��(*pointer)���ߵ����Ų����١����ȥ������д��*pointer.memberName����ô�͵�Ч��*(pointer.memberName)�������������ȫ�����ˡ�

�ڶ���д���У�->��һ���µ��������ϰ�߳���Ϊ����ͷ����������������ͨ���ṹ��ָ��ֱ��ȡ�ýṹ���Ա����Ҳ��->��C�����е�Ψһ��;��

���������д���ǵ�Ч�ģ�����ͨ�����ú����д������������ֱ�ۡ�*/

//��ʾ�����ṹ��ָ���ʹ�á�
/*#include <stdio.h>
int main(){
    struct{
        char *name;  //����
        int num;  //ѧ��
        int age;  //����
        char group;  //����С��
        float score;  //�ɼ�
    } stu1 = { "Tom", 12, 18, 'A', 136.5 }, *pstu = &stu1;
    //��ȡ�ṹ���Ա��ֵ
    printf("%s��ѧ����%d��������%d����%c�飬����ĳɼ���%.1f��\n",
    (*pstu).name, (*pstu).num, (*pstu).age, (*pstu).group, (*pstu).score);
    printf("%s��ѧ����%d��������%d����%c�飬����ĳɼ���%.1f��\n",
    pstu->name, pstu->num, pstu->age, pstu->group, pstu->score);
    return 0;
}*/


//��ʾ�����ṹ������ָ���ʹ�á�
#include <stdio.h>
struct stu{
    char *name;  //����
    int num;  //ѧ��
    int age;  //����
    char group;  //����С��
    float score;  //�ɼ�
}stus[] = {
        {"Zhou ping", 5, 18, 'C', 145.0},
        {"Zhang ping", 4, 19, 'A', 130.5},
        {"Liu fang", 1, 18, 'A', 148.5},
        {"Cheng ling", 2, 17, 'F', 139.0},
        {"Wang ming", 3, 17, 'B', 144.5}
}, *ps;
int main(){
    //�����鳤��
    int len = sizeof(stus) / sizeof(struct stu);
    printf("Name\t\tNum\tAge\tGroup\tScore\t\n");
    for(ps=stus; ps<stus+len; ps++){
        printf("%s\t%d\t%d\t%c\t%.1f\n", ps->name, ps->num, ps->age, ps->group, ps->score);
    }
    return 0;
}

