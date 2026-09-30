#include <stdio.h>
int main(int argc, char *argv[])
{
    int a,b;
    printf("input two integers :");
    scanf("%d %d",&a, &b);
    printf("+ result is %d\n- result is %d\n* result is %d\n/ result is %d\n%% result is %d\n", a+b, a-b, a*b, a/b, a%b);
    return 0;
}
