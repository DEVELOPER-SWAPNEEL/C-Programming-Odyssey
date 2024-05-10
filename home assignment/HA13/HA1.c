//WAP to find the sum of two matrices of order 2*2 using multidimensional arrays.
#include<stdio.h>
int main()
{
    int i,j,sq,arr[10][10],brr[10][10];

    printf("\nENTRE THE ELEMENTS OF THE FIRST MATRIX");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("\nENTRE THE VALUE OF THE ELEMENT %d x %d :-     ",i+1,j+1);
            scanf("%d",&arr[i][j]);
         
        }
    }
    
     printf("\nENTRE THE ELEMENTS OF THE SECOEND MATRIX");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("\nENTRE THE VALUE OF THE ELEMENT %d x %d :-     ",i+1,j+1);
            scanf("%d",&brr[i][j]);
        }
    }
      printf("\nTHE FIRST MATRIX IS :- ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("\n%d  ",arr[i][j]);
        }

    }
          printf("\nTHE SECOEND MATRIX IS :- ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d",brr[i][j]);
        }

    }




    return 0;
}