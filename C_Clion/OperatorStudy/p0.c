//
// Created by ThinkPad on 2021-06-03.
////统计num的补码中有几个1

/*int main()
{
    printf("input a Int:");
    int num = 0;
    scanf("%d", &num);

    int count = 0;
    while(num)
    {
        if(num%2 == 1)
        {
            count++;
            num = num/2;
        }
    }

    printf("%d\n", count);

    return  0;
}*/
//*******************************
//优化
	//32bit
//	//num&1 == 1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000/
int main()
{
    int count = 0;
    printf("input a Int:");
    int num = 0;
    scanf("%d", &num);

    for (int i = 0; i < 32; i++) {
        if((num >> 1 & 1) == 1)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
