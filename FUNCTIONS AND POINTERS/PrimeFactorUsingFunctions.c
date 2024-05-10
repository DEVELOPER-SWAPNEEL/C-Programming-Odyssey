#include<stdio.h>
void prime (int x)
{
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            int n=i;
            for(int j=1;j<=n;j++)
            {
                if(n%j ==0 && n%n==0)
                {}
                else
                {
                    printf("\nTHE PROVIDED NUMBER %d HAVE %d AS A PRIME FACTOR ",x,n);
                }
        
            }
        }
    }
  return;
}

int main()
{
    int n;
    printf("\nENTRE THE VALUE :-   ");
    scanf("%d",&n);
    prime(int n);
    return 0;
}
