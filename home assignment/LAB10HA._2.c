/*WAP to print the following pattern
A
B A
C B A
D C B A
E D C B A*/
#include<stdio.h>
int main()
{
    int n;
    printf("\n\nENTRE THE NUMBER :- ");
    scanf("%d",&n);
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%c ",ch+j-1);
        }
        printf("\n");
    }

    return 0;
}