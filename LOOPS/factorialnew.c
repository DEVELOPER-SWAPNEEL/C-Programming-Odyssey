#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("\nENTRE THE NUMBER WHICH FACTORIAL YOU WANT:-  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }

    printf("\nTHE FACTORIAL OF THE ENTRED NUMBER %d IS %d",n,sum);

    return 0;
}