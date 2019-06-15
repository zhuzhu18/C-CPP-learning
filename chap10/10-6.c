#include <stdio.h>
#include <string.h>

int mylen(const char *s)
{
    int index = 0;
    while(s[index]!='\0')
        index++;
    return index;
}

int main(void)
{
    const char ar[] = "Hello";
    printf("%lu\n", mylen(ar));
    printf("%lu\n", strlen(ar));
    printf("%lu\n", sizeof(ar));
    
    return 0;
}

/*输出
5
5
6
*/
