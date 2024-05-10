#include<stdio.h>
int main()
{   
    int n;
    printf("\n\nENTRE THE NUMBER:- ");
    scanf("%d",&n);

    //display this GP 100,50,25...upto n terms.

        float a=100;

    for(int i=1;i<=n;i++)

    {

        printf("%.2f   ",a);
        a=a*.5;
    }

    return 0;
}
