#include <stdio.h>
int main()
{
    int i,j,n;
    printf("ENTRE THE NUM.");
    scanf("%d",&n);             //3

    for(i=1;i<=n;i++)
    {
        int k=1;

        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k=k+2;
            
        }
        printf("\n");
    }



    return 0;
}