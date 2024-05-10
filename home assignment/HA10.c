/*WAP to print the following
pattern
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5*/

#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("\n\nENTRE THE NUMBER OF ROWS :-  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            k=1;
            k++;
        }
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
            printf("%d",k);
            }
        }
            printf("\n");
    }

   return 0; 
}