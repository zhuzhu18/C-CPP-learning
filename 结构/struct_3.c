#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point* getStruct(struct point*);
void output(struct point*);

int main(int argc, char const argv[]){
    struct point y;
    output(getStruct(&y));
    return 0;
}
struct point* getStruct(struct point* p){
    scanf("%d", &p->x);
    scanf("%d", &p->y);
    
    return p;
}

void output(struct point* p){
    printf("%d, %d", p->x, p->y);
}
