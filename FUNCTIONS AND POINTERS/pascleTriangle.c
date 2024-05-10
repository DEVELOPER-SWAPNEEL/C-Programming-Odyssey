#include<stdio.h>

// int fact (int a)
// {
//     int factorial=1;
//     for(int i=2;i<=a;i++)
//     {
//         factorial*=i;
//     }
//         return factorial;
// }

// int c (int n, int r)
// {
    
//     int comb= fact(n)/(fact(r)*fact(n-r));   

//     return comb;
// }
int main()
{
    int i,j,n;
    printf("\nENTRE THE N :- ");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("* ");
        }
    }
//     int g;
//     printf("\nENTRE THE N :- ");
//     scanf("%d",&g);

//     for(int i=0;i<g;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             printf(" ");
//         }
        
//     }

//     for(int i=0;i<=g;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             int res =c (i,j);

//                 printf("%d ",res);
//         }
//             printf("\n");
//     }



    return 0;
}