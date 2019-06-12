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


/* 输出如下：
s = 0x4006e4
s1 = 0x4006e4
s2 = 0x7ffdf4615e70
here s2[0] = B

运行 FINISHED; 退出值0; 实时:  0ms; 用户:  0ms; 系统:  0ms
*/
