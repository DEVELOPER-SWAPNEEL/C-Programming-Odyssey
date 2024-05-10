#include <stdio.h>
int main()
{
    int i,n;

    printf("\n\nENTRE THE NUMBER UPTO WHICH YOU WANT THE A.P. :-  ");
    scanf("%d",&n);

        int a=4;

    for(i=1;i<=n;i++)
    {
        printf("%d  ",a);
        a=a+3;
    }

return 0;

}
