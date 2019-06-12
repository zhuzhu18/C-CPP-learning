#include <stdio.h>

int main(void)
{
    char *s = "hello world";      // 位于代码段，只读不可写
    char *s1 = "hello world";
    char s2[] = "hello world";    // 可写
    s2[0] = 'B';
    printf("s = %p\n", s);
    printf("s1 = %p\n", s1);
    printf("s2 = %p\n", s2);
    printf("here s2[0] = %c\n", s2[0]);
    
    return 0;
}
