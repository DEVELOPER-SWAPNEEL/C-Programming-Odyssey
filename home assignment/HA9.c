 /*WAP to test whether an inputted number is a strong number or not.
(A number is said to be Strong if sum of factorial of digits is equal to the original number)*/

#include <stdio.h>
int main()
{
    int n,i,j,fact=1,rem1=0,sum=0;

    printf("ENTRE THE NO. :- ");
    scanf("%d",&n);                 //739
    j=n;
        while (n!=0)
        {
            rem1=n%10;
            i=1;

            while(i<=rem1)
            {
                fact=fact*i; 
                i++;
            }
           
            sum=sum+fact;

            n=n/10;
        }
printf("\n%d\n\n",sum);

        if(sum==j)
        {
            printf("\nTHE ENTRED NUMBER IS A STORNG NUMBER\n\n");
                    }

        else {
            printf("\n\nTHE ENTRED NUMBER IS NOT A STRONG NUMBER\n\n");
        }

    return 0;
}