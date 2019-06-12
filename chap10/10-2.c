#include <stdio.h>

void f()
{
    char s1[4], s2[4];
    scanf("%4s", s1);
    scanf("%4s", s2);
    printf("%s##%s\n", s1,s2);
    printf("%d\n",sizeof(s1));
    printf("%d\n",sizeof(s2));
}

int main(void)
{
    f();
    
    return 0;
}


/*输出如下：
123456789
1234##5678
4
4

运行 FINISHED; 退出值0; 实时:  4s; 用户:  0ms; 系统:  0ms
*/
