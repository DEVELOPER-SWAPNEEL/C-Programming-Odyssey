#include<stdio.h>
int main()
{
    int a,b,n,j;
    printf("\n\nENTRE THE NO.");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
