#include<stdio.h>
int main()
{
    int i=1,n,l=0,rev=0,last=0,sum=0;
    printf("ENTRE THE NO.");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
    }

    printf("THE SUM OF THE SERIES IS :- %d",sum);

return 0;
}