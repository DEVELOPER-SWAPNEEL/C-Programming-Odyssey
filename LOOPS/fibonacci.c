#include<stdio.h>
int main()
{
    int i,n;
    printf("\n\nENTRE THE NO.");
    scanf("%d",&n);

    int a=1;
    int b=1;
    int sum = 1;
    for(i=1;i<=n-2;i++)
    {
        if(i==1)
        {
            printf("\n\nTHE VALUE OF THE 1st TERM IS :- 1");
            printf("\n\nTHE VALUE OF THE 2nd TERM IS :- 1");

        }
        sum = a+b;
        a=b;
        b=sum;

        printf("\n\nTHE VALUE OF THE %dth TERM IS :- %d",i+2,sum);
    }

return 0;
}