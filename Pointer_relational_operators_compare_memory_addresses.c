#include<stdio.h>

//Pointer relational operators compare memory addresses
int main()
{
   int a[]={1,2,3,4,5,6};
   int *p=&a[3];
   int *q=&a[5];
   printf("%d\n",p<=q);//output:1
   printf("%d\n",p>=q);//output:0
   q=&a[3];
   printf("%d",p==q);//output:1
}
