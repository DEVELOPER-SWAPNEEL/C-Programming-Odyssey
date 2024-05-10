/*2. WAP to print the following pattern for rows = 4
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4*/

#include<stdio.h>
int main()
{
    int i,j,n,c;

    printf("\nENTRE THE NUMBER OF ROWS :- ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",i);

        }
            printf("\n");
    }



  return 0;  
}