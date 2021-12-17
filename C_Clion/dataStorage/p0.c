// Big Endian and Little Endian

// Created by ThinkPad on 2021-06-09.
//为什么会有大小端模式之分呢？这是因为在计算机系统中，我们是以字节为单位的，每个地址单元都对应着一
//个字节，一个字节为8bit。但是在C语言中除了8bit的char之外，还有16bit的short型，32bit的long型（要看具
//体的编译器），另外，对于位数大于8位的处理器，例如16位或者32位的处理器，由于寄存器宽度大于一个字
//节，那么必然存在着一个如果将多个字节安排的问题。因此就导致了大端存储模式和小端存储模式。
//例如一个16bit 的short 型x ，在内存中的地址为0x0010 ， x 的值为0x1122 ，那么0x11 为高字节， 0x22
//为低字节。对于大端模式，就将0x11 放在低地址中，即0x0010 中， 0x22 放在高地址中，即0x0011 中。小
//端模式，刚好相反。我们常用的X86 结构是小端模式，而KEIL C51 则为大端模式。很多的ARM，DSP都为小
//端模式。有些ARM处理器还可以由硬件来选择是大端模式还是小端模式。

#include <stdio.h>

int checkSys()
{
    int i = 1;
/*    char* p = (char*)&i;//取地址强制转换为char指针赋值给指针p,
    return *p;*/ //解引用
    return *(char*)&i;
}

int main()
{
    int ret = checkSys();
    if(ret == 1)
    {
        printf("Little Endian!\n");
    }else
    {
        printf("Big Endian!\n");

    }
    return 0;
}