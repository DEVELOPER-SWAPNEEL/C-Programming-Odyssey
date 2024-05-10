#include<stdio.h>
int main()
{
    int i,j,n,c;

    printf("\nEntre the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int k=65;
       for(j=1;j<=i;j++)
        {

        if(i%2==0)
        {
        
           int k=65+c;

            c++;
            char ch=(char)k;

            printf("%c",ch);
        }

        if(i%2!=0)
        {
            printf("%d",j);
        }
        }
        printf("\n");
    } 



  return 0;  
}