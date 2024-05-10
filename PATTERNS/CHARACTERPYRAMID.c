#include<stdio.h>
int main()
{
    int n;
    printf("\nENTRE THE NO. OF ROWS:- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char ch='A', cha='A';

        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%c ",ch++);
        }
        for(int m=i-1;m>=1;m--)
        {
            printf("%c ",cha++);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}