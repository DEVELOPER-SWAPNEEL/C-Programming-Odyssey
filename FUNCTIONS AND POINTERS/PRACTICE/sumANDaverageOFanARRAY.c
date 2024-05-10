//Wap to find sum and average of an array using funtion
#include<stdio.h>
int sum(int arr[],brr[]);
int average;

int main()
{
    int arr[5],brr[5];
    for(int i=0;i<5;i++){
        printf("ENTRE THE 1ST ARRAY'S %dth number ", i+1);
        scanf("%d",arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("ENTRE THE 2ND ARRAY'S %dth number ", i+1);
        scanf("%d",brr[i]);
    }
    int sum_result = sum(arr,brr);
}