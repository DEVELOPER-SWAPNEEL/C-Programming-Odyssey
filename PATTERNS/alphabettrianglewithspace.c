#include<stdio.h>
int main()
{
    int n;
    printf("\nENTRE THE NUMBER OF ROWS :- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
             char ch='A';

        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }

    return 0;
}