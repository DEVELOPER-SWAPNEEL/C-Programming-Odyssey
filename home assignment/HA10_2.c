/*3. WAP to check whether a number is armstrong or not. (Exp- 153 = 1^3 + 5^3 + 3^3)*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem=0,sum=0,p=1;

    printf("ENTRE THE NUMBER :- ");
    scanf("%d",&n);

    int k=n;

    for(int i=1;i<=n;i++)
    {
        rem=n%10;
        p=pow(rem,3);
        sum=sum+p;

    }
    if(sum==k)
    {
        printf("THE PROVIDED NUMBER  IS A ARMSTRONG");
    }
    else
    {
        printf("THE PROVIDED NUMBER  IS NOT A ARMSTRONG");
    }


    return 0;
}