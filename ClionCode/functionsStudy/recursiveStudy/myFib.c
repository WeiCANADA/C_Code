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
    //. 1���ݹ��д�ɷǵݹ顣
    //2. ʹ��static�������nonstatic�ֲ������ڵݹ麯������У�����ʹ��static�������nonstatic��
    //�����󣨼�ջ�� �󣩣��ⲻ�����Լ���ÿ�εݹ���úͷ���ʱ�������ͷ�nonstatic����Ŀ�����
    // ����static���󻹿��Ա���ݹ���õ��м�״̬�����ҿ�Ϊ�������ò������ʡ�
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


