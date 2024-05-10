#include<stdio.h>
int main()
{
    int i,j,x,y,n,sum=1,fun=0,show;
    printf("\nENTRE THE VALUE OF N :- ");
    scanf("%d",&n);
    printf("\nENTRE THE VALUE OF x :- ");
    scanf("%d",&x);
    printf("\nENTRE THE VALUE OF y :- ");
    scanf("%d",&y);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=y;j++)
        {
           for(int k=1;k<=y;k++)
            {
                sum=sum*k;
                show=x/sum;
            }
        printf("  %d  ",show);
        }
    }

return 0;    
}
