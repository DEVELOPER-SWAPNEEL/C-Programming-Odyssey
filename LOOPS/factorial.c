#include<stdio.h>
int main()
{
    int i=1,n,rev=1;
    printf("ENTRE THE NO.");
    scanf("%d",&n);

    for(n;n>0;--n)
    {
        rev=rev*n;
    }

    printf("THE SUM OF THE SERIES IS :- %d",rev);

return 0;
}