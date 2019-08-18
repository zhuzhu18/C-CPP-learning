#include<stdio.h>
void minmax(int a[],int len,int *min,int *max);
int main(void)
{
    int a[] = {0,1,23,4,5,6,12,45,98,100};
    int min,max,len;
    len = sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min,&max);
    printf("min=%d,max=%d",min,max);
    return 0;
}

void minmax(int a[],int len,int *min,int *max)
{
    int i = 0;
    *min = *max = a[0];
    for (i=1;i<len;i++)
    {
        if (a[i]>*max)
            *max = a[i];
        if (a[i]<*min)
            *min = a[i];
    }
}
