//                   1
//                 1 2 1
//               1 2 3 2 1
//             1 2 3 4 3 2 1 
//           1 2 3 4 5 4 3 2 1
//         1 2 3 4 5 6 5 4 3 2 1 
//       1 2 3 4 5 6 7 6 5 4 3 2 1
//     1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
//   1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 
// 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1

#include<stdio.h>
int main()
{
    int n;
    printf("\nENTRE THE NO. OF ROWS:- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        for(int m=i-1;m>=1;m--)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}