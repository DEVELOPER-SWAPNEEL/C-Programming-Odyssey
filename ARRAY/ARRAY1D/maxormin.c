#include<stdio.h>
int main()
{
    int arr[5]={-4,-90,-6,-1,-55};

    int max=arr[0];//we can also use this max finding through using functions or standard liberaries.

    for(int i=1;i<=4;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
        printf("%d",max);

    return 0;
}