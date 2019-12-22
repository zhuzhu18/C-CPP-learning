#include <stdio.h>

struct point {
    int x;
    int y;
};
struct point getStruct(void);
void output(struct point);

int main(int argc, char const *argv[])
{
    struct point y = {0, 0};
    y = getStruct();
    output(y);
}

struct point getStruct(void)
{
    struct point tempStruct;
    scanf("%d", &tempStruct.x);
    scanf("%d", &tempStruct.y);
    
    return tempStruct;
}

void output(struct point d)
{
    printf("%d, %d", d.x, d.y);
}
