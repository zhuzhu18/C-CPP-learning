#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("请输入月份:");
    int month;
    char a[][10] = {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };
    scanf("%d", &month);
    switch(month){
        case 1: printf("%s\n",a[0]);break;
        case 2: printf("%s\n",a[1]);break;
        case 3: printf("%s\n",a[2]);break;
        case 4: printf("%s\n",a[3]);break;
        case 5: printf("%s\n",a[4]);break;
        case 6: printf("%s\n",a[5]);break;
        case 7: printf("%s\n",a[6]);break;
        case 8: printf("%s\n",a[7]);break;
        case 9: printf("%s\n",a[8]);break;
        case 10: printf("%s\n",a[9]);break;
        case 11: printf("%s\n",a[10]);break;
        case 12: printf("%s\n",a[11]);break;
        
    }
}


/*
请输入月份:6
June

运行 FINISHED; 退出值0; 实时:  2s; 用户:  0ms; 系统:  0ms
*/
