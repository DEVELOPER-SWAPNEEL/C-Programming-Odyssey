#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("\n\nENTRE THE NUMBER:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            k=(n/2)+1;

            if(i==k || j==k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
            printf("\n");
    }   
    return 0;
}