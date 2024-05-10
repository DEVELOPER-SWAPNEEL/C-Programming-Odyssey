#include<stdio.h>
int min(int x,int y)
{
    int n;
    if(x<y) return x;
    else 
    return y;
}
int hcf(int x,int y)
{
    int hcf;
    for(int i=min(x,y);i>=1;i--)
    {
        if(x%i==0 && y%i==0)
        {
            hcf = i;
            break;
        }
    }
        return hcf;
}
int main()
{
    int a,b;
    printf("ENTRE THE VALUE OF 1st no. :- ");
    scanf("%d",&a);

    printf("ENTRE THE VALUE OF 2nd no. :- ");
    scanf("%d",&b);

    int result = hcf(a,b);

    printf("\nTHE HCF OF THE PROVIDED %d AND %d NUMBERS IS %d \n",a,b,result );
    return 0;
}