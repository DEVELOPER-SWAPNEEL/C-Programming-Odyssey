#include<stdio.h>
int main()
{
    int r,c,i,j;

    printf("\n\nENTRE THE NUMBER OF ROWS :- ");
    scanf("%d",&r);
    printf("\n\nENTRE THE NUMBER OF COLOUMS :- ");
    scanf("%d",&c);

    for(i=1;i<=r;i++)
    {
        for (j=1;j<=c;j++)
        {
           if(j==1 || j==c || i==1 || i==r)
           {
            printf("*");
           }

           else{
            printf(" ");
           }
        }
            printf("\n");
    }

  return 0;  
}