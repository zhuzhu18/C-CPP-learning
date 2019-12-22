#include <stdio.h>

struct date {
        int month;
        int day;
        int year;
    };
int main(int argc, char const *argv[])
{
    struct date today = {12, 22, 2019};
    struct date someday = {.month=06, .day=20};
    
    printf("Today's date is %i-%i-%i.\n", 
            today.year, today.month, today.day);
    printf("Someday's date is %i-%i-%i.\n", 
            someday.year, someday.month, someday.day);
    return 0;
}
