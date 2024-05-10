#include<stdio.h>
int main()
{
    int n,n1,count=0;;
    printf("\nENTRE THE NO. OF ELEMENTS YOU WANT TO ENTRE:-  ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nELEMENT NUMBER %d is :-  ",i+1);
        scanf("%d",&arr[n]);
    }
    printf("\nGREATER THEN COUNTING REFERANCE NUMBER :-  ");
    scanf("%d",&n1);

    for(int i=0;i<n;i++)
    {
        if(arr[i]>n1)
       { 
        count++;
       } 
    }
    printf("\n%d\n",count);

    return 0;
}