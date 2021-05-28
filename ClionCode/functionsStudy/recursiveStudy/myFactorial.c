//
// Created by ThinkPad on 2021-05-28.
//阶乘函数
int myFactorial(int n)
{

    //利用循环实现阶乘
/*    int ret = 1;
    for (int i = 1; i <= n ; i++) {
        ret *= i;
    }
    return ret;*/

//利用递归实现
//int ret = 1;
if(n <= 1)
{
    return 1;
} else
{
    return n * myFactorial(n -1);
}

}

