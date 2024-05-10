
#include<stdio.h>
int main()
{
    int i,j,n1,sum=0,arr[10][10];
    printf("\n\nENTRE THE NUMBER OF ROWS IN THE 1ST MATRIX:- ");
    scanf("%d",&n1);


    printf("\nENTRE THE ELEMENTS OF THE MATRIX :-  \n");
    
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("\nENTRE THE VALUE OF THE ELEMENT %d X %d :-  ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for ( i = n1/2; i < n1; )
    {
        for(j=0;j<n1;j++)
        {
            sum += arr[i][j];
        }
    }

        printf("\n IF THE ENTRED MATRIX IS :-  ");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n1;j++)
            {
                printf("%d  ",arr[i][j]);
            }
        }
        printf("\nTHEN THE SUM OF THE DIGITS OF THE MIDDLE ROW IS :-  %d",sum);

  return 0;
}