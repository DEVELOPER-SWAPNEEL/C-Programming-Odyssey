#include<stdio.h>

int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int a;
    printf("ENTRE THE VALUE OF THE A :- ");
    scanf("%d",&a);
    int result = fact(a);
    printf("\nTHE FACTORIAL OF THE ENTRED NUMBER IS :- %d ",result);
    return 0;
}