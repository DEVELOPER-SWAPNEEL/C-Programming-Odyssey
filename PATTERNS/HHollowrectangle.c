#include<stdio.h>
int main()
{
    int i,j,k,r,c;

    printf("\nENTRE THE NUMBER OF ROWS:- ");
    scanf("%d",&r);
    printf("\nENTRE THE NUMBER OF COLOUMS:- ");
    scanf("%d",&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
             if(i==1 || i==r || j==1 || j==c)
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