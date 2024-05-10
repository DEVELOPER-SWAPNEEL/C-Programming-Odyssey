#include <stdio.h>
int main()
{
    int i,n;

    printf("\n\nENTRE THE NUMBER UPTO WHICH YOU WANT THE A.P. :-  ");
    scanf("%d",&n);

    for(i=1;i<=4+(n-1)*3;i=i+3)
    {
        printf("%d  ",i);
    }

return 0;

}
