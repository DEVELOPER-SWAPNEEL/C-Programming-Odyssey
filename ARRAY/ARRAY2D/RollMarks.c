#include<stdio.h>
int main()
{
    int arr[4][2];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("\nENTRE THE VALUE OF THE ELEMENT %d X %d ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nTHE ROLL NUMBER AND MARKS MATRIX IS AS FOLLOWS\n\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}