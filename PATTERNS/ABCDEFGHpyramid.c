#include<stdio.h>
int main()
{
    int n;
    printf("\nENTRE HT ENO. OF ROWS:- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char ch= 'A';
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }

    return 0;
}