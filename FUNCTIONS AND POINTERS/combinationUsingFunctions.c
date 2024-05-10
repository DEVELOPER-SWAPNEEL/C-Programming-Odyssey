#include<stdio.h>

int fact (int a)
{
    int factorial=1;
    for(int i=2;i<=a;i++)
    {
        factorial*=i;
    }
        return factorial;
}

int c (int n, int r)
{
    
    int comb= fact(n)/(fact(r)*fact(n-r));   

    return comb;
}
int main()
{
    int n,r;
    printf("\nENTRE THE N :- ");
    scanf("%d",&n);

    printf("\nENTRE THE R :- ");
    scanf("%d",&r);

    int combination = c(n,r);

    //int rfact=1,nfact=1,nrfact=1;

   // int comb= fact(n)/(fact(r)*fact(n-r));

    // int k = n-r;

    // for(int i=2;i<=n;i++)
    // {
    //     nfact*=i;
    // }
    //  for(int i=2;i<=r;i++)
    // {
    //     rfact*=i;
    // }
    

    // for(int i=2;i<=k;i++)
    // {
    //     nrfact*=i;
    // }

    // int comb= nfact/(rfact*nrfact);

    printf("\nTHE COMBINATION OF THE ENTRED VALUES IS:- %d \n",combination);

    return 0;
}