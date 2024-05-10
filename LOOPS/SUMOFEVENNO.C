#include<stdio.h>
int main()
{
    int n,r=0;
    printf("ENTRE THE NO.");
    scanf("%d",&n);

    int sum=0;
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            sum=sum+r;
        }

        n=n/10;
    }
    printf("THE sum OFnTHE EVEN DIGITS ARE :- %d",sum);

return 0;
}