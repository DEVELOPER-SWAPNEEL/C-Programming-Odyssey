/*              1
                01
                101 
                0101   */


#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("\nENTRE THE NUMBER OF ROWS:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            k=0;
        }
        else{
            k=1;
        }
        for(j=1;j<=i;j++)
        {
            if(k==1)
            {k=0;}
            else
            {
                k=1;
            }
            printf("%d",k);
        }
        printf("\n");
    }

   return 0; 
}