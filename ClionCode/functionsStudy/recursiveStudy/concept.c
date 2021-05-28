//
// Created by ThinkPad on 2021-05-28.
//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件。
//****************************************
//练习:接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4./


void myPrint(unsigned int a)
{
    if(a > 9)
    {
        myPrint(a/10);
    }
    printf("%d-", a%10);
}
