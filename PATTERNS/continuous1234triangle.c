#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("\n\nENTRE THE NUMBER OF ROWS :-");
    scanf("%d",&n);

    k=1;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d ",k);
            k+=2;
        }
            printf("\n");
    }

    return 0;
}