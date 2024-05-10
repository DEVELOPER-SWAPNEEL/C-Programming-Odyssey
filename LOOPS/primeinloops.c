#include<stdio.h>
int main()
{   
    int n;
    printf("\n\nENTRE THE NUMBER:- ");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)

    {
        if(n%n==0 || n%n==1)
        {
        printf("THE PROVIDED NUMBER %d IS A PRIME NUMBER!!",n);
        }
        else{
        printf("THE PROVIDED NUMBER %d IS A NOT A PRIME NUMBER!!",n);
 
        }
    }

    return 0;
}