#include<stdio.h>

int *findMid(int arr[],int N)
{
    return &arr[N/2];
}

int main()
{
    int N;    scanf("%d", &N);
    int arr[N];
    for(int i =0;i<N;i++)
    {
        scanf("%d", &arr[i]);
    }

    int *mid=findMid(arr, N);

    printf("Mid = %d\n",*mid);
}
