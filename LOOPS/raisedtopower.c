#include<stdio.h>
int main()
{
    int a,b,multi=1;
    printf("\n\nENTRE THE BASE NO.");
    scanf("%d",&a);
    printf("\n\nENTRE THE POWER NO.");
    scanf("%d",&b);

    for(int i=1;i<=b;i++)
    {
        multi=multi*a;
    }

    printf("\n\nTHE VALUE OF POWER IS:- %d",multi);

  
return 0;

}