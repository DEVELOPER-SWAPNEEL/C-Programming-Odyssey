//WAP to find the sum of two matrices of order 2*2 using multidimensional arrays.
#include<stdio.h>
int main()
{
    int i,n,j,row1,colo1,row2,colo2,brr[10][10],arr[10][10];
    printf("\n\nENTRE THE NUMBER OF ROWS OF THE FIRST MATRIX:-   ");
    scanf("%d",&row1);
    printf("\n\nENTRE THE NUMBER OF COLOUMNS OF THE FIRST MATRIX:-   ");
    scanf("%d",&colo1); 
    printf("\n\nENTRE THE NUMBER OF ROWS OF THE SECOEND MATRIX:-   ");
    scanf("%d",&row2);
    printf("\n\nENTRE THE NUMBER OF COLOUMNS OF THE SECOEND MATRIX:-   ");
    scanf("%d",&colo2); 


    arr[row1][colo1];
    brr[row2][colo2];
    printf("\n\nENTRE THE ELEMENTS OF FIRST MATRIX:-  ");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<colo1;j++)
        {
            printf("\n\nENTRE THE ELEMENT NUMBER %d x %d :- ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\nENTRE THE ELEMENTS OF SECOEND MATRIX:-  ");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<colo2;j++)
        {
            printf("\nENTRE THE ELEMENT NUMBER %d x %d :- ",i+1,j+1);
            scanf("%d",&brr[i][j]);
        }
    }
            printf("\n\n1ST MATRIX IS :-\n");
      for(i=0;i<row1;i++)
    {
        for(j=0;j<colo1;j++)
        {
           printf("%d   ",arr[i][j]);
        }
            printf("\n");
    }
            printf("\n\n2ND MATRIX IS :- \n");
            
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<colo2;j++)
        {
            printf("%d  ",brr[i][j]);
        }
            printf("\n");
    }

    if(row1==row2 && colo1==colo2)
    {

        int crr[10][10];
        for(int i =0;i<row1;i++)
        {
            for(int j=0;j<colo1;j++)
            {
                int sum=0;
                sum=arr[i][j]+brr[i][j];
                crr[i][j]=sum;
            }
        }
                printf("\n\nTHE SUM OF THE TWO MATRIX IS :- \n\n");

        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<colo1;j++)
            {
                printf("%d   ",crr[i][j]);
            }
                printf("\n");
        }
    }
    else
    {
        printf("\n\nPLEASE ENTRE THE NUMBER OF ROWS AND MATRIX SAME SO AS THE MAKE THE SUM POSSIBLE!!");
    }

    return 0;
}