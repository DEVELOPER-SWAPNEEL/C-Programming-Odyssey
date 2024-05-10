#include<stdio.h>
int main()
{
    int arr[5];
    int n;
    for(int i=0;i<=4;i++)
    {
        printf("\nMARKS OF SUBJECT NUMBER %d :- ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]<=35)
        {
            printf("\nTHE PROVIDED ROLL NUMBER %d IS HAVING MARKS LESS THEN 35 ",i);
        }
    }
    

    return 0;
}