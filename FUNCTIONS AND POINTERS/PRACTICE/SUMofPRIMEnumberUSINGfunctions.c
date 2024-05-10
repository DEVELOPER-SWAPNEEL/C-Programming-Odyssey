//1. Write a C program to find the sum of only PRIME values in a 2-D array using a function PRIMESUM().

#include<stdio.h>
    int sum(int ar[]){
        int summ=0;
        for(int i=0;i<10000;i++)
        {
            int summ = summ+ar[i];
        }
            return summ;
    }
int main()
{
    int n,arr[n];
    printf("\nENTRE THE NUMBER OF ELEMENTS :- ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("\nENTRE THE %d VALUE OF THE INDEX:- ",i+1);
        scanf("%d",arr[i]);
    }
        printf("\nTHE SUM OF THE ELEMENTS OF THE ARRAY IS :- %d",sum(arr));
return 0;
}