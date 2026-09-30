#include <stdio.h>
int main(int argc, char *argv[])
{
    int year;
    int a;
    printf("input the year :");
    scanf("%d",&year);
    if ((year%4 == 0 && year%100 != 0) || year%400 ==0)
        a = 1;
    else
        a = 0;
    printf("is the year %d the leap year? : %d", year, a);
    return 0;
}
