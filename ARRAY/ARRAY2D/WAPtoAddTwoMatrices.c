#include<stdio.h>
int main()
{
    int n;
    printf("\nENTRE THE NUMBER OF ROWS IN THE SQUARE MATRIX :- ");
    scanf("%d",&n);
    int arr[n][n],brr[n][n],crr[n][n];
    printf("\nENTRE THE VALUES OF THE RRESPECTIVE ELEMENTS OF THE FIRST MATRIX:- ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\nENTRE THE VALUE OF THE ELEMENT %d X %d :-  ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nENTRE THE VALUES OF THE RRESPECTIVE ELEMENTS OF THE SECOEND MATRIX:- ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\nENTRE THE VALUE OF THE ELEMENT %d X %d :-  ",i+1,j+1);
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            crr[i][j]=arr[i][j]+brr[i][j];
            printf("%d  ",crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}