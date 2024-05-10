#include<stdio.h>
int main()
{   
    int n,i;


    printf("ENTRE THE NUMBER ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int k=64+j;
            
            char ch=(char)k;

            printf("%c ",ch);
        }
        printf("\n");
    }

    return 0;
}