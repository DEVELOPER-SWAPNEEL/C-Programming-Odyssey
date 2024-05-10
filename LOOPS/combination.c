#include<stdio.h>
int main()
{
    int n,r;
    printf("\nENTRE THE N :- ");
    scanf("%d",&n);

    printf("\nENTRE THE R :- ");
    scanf("%d",&r);

    int rfact=1,nfact=1,nrfact=1;

    int k = n-r;

    for(int i=2;i<=n;i++)
    {
        nfact*=i;
    }
     for(int i=2;i<=r;i++)
    {
        rfact*=i;
    }
    

    for(int i=2;i<=k;i++)
    {
        nrfact*=i;
    }

    int comb= nfact/(rfact*nrfact);

    printf("\nTHE COMBINATION OF THE ENTRED VALUES IS:- %d \n",comb);

    return 0;
}