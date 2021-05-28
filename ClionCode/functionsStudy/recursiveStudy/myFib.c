//
// Created by ThinkPad on 2021-05-28.
//
int myFib(unsigned int a)
{

//recursive method
/*    if(a <= 2)
    {
        return 1;
    } else
    {
        return myFib(a - 1) + myFib( a - 2);
    }*/

 //*********************************************************
    //. 1将递归改写成非递归。
    //2. 使用static对象替代nonstatic局部对象。在递归函数设计中，可以使用static对象替代nonstatic局
    //部对象（即栈对 象），这不仅可以减少每次递归调用和返回时产生和释放nonstatic对象的开销，
    // 而且static对象还可以保存递归调用的中间状态，并且可为各个调用层所访问。
    //d = b + c
    int b = 1;
    int c = 1;
    int d = 1;
    while (a>2)
    {
        d = b + c;
        b = c;
        c = d;
        a--;
    }
    return d;
}


