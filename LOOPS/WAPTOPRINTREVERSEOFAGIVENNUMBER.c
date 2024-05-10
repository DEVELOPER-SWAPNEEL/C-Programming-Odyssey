#include<stdio.h>
int main()
{
    int a,n,l=0,rev=0,last=0,sum=0;
    printf("ENTRE THE NO.");
    scanf("%d",&n);

   a=n;

    while(n!=0)
    {
        l=n%10;
         rev=rev*10+l;

        n=n/10;
 
    }

    sum=a+rev;

    printf("THE REVERSE OF THE DIGITS ARE :- %d\nSUM= %d",rev,sum);

return 0;
}