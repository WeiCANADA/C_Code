//
// Created by ThinkPad on 2021-05-27.
//写一个函数,每调用一次这个函数,就将num的值加1
void Add(int* p)
{
    (*p)++;
}

int main()
{
    int num = 0;
    Add(&num);
    printf("num = %d\n",num);
    Add(&num);
    printf("num = %d\n",num);
    Add(&num);
    printf("num = %d\n",num);
    Add(&num);
    printf("num = %d\n",num);


    return 0;
}

