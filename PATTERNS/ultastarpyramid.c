// WAP to print the following pattern
//  *********
//   *******
//    *****
//     ***
//      *
#include<stdio.h>
int main()
{
    int n;

    printf("\nENTRE THE NUMBER OF ROWS YOU WANT THE PATTERN TO BE PRINTED :- ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        int p=n;
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        
            p--;
        }

        for(int k=(2*p)-1;k>=1;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}