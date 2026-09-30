#include <stdio.h>
int main(int argc, char *argv[])
{
    int second;
    printf("input the second :");
    scanf("%d",&second);
    printf("the time is %d : %d", second/60, second%60);
    return 0;
}
