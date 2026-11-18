#include<stdio.h>

void MinMax(int arr[],int N,int *min,int *max)
{
    *min=*max=arr[0];
    for(int i=0;i<N;i++)
    {
        if(*min>arr[i]) *min=arr[i];
        if(*max<arr[i]) *max=arr[i];
    }
}

int main()
{
    int N;    scanf("%d", &N);
    int arr[N];
    for(int i =0;i<N;i++)
    {
        scanf("%d", &arr[i]);
    }

    int min,max;

    MinMax(arr,N,&min,&max);

    printf("Maximum = %d , Minimum = %d",max,min);
}
