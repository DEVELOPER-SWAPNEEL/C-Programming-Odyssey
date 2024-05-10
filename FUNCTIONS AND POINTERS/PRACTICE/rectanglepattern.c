#include<stdio.h>
int main()
{
    int r,c;
     printf("ENTRE THE NUM. OF ROWS:-  ");
    scanf("%d",&r);
    printf("ENTRE THE NO. OF COLOMS:-  ");
    scanf("%d",&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            if(i==0&&i==r) printf("*");
            else if (j==0&&j==c) printf("*");
        }
            printf("\n");
    }
        return 0;
}
