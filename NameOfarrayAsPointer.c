#include<stdio.h>
int main()
{
    int a[5];
    *a=10;
    printf("%d\n", a[0]);
    *(a+1)=20;
    printf("%d",a[1]);
    return 0;
}
