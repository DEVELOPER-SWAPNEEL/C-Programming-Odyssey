#include<stdio.h>
int main()
{
    int n;
    printf("\nENTRE THE NUMBER OF ROWS :- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        // for(int t=1;t<=i-1;t++)    THIS IS DONE THROUGH USING ANOTHER VARIABLE T IN THE CODE.
        // {
        //     printf("*");
        // }
        printf("\n");
    }

    return 0;
}