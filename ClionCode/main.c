#include <stdio.h>
void test()
{
    static int a = 1;
    a++;
    printf("a = %d\n", a);
}

int main() {
/*    enum Color{
        Red,
        Blue,
        Yellow

    };*/
    int i = 0;
    while ( i < 5)
    {
        test();
        i++;
    }

    return 0;
}
