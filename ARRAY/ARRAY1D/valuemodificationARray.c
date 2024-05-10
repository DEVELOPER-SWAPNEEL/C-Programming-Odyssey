#include<stdio.h>
int main()
{
    int n;
    printf("\nENTRE THE NO. OF ELEMENTS YOU WANT TO ENTRE:-  ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nELEMENT NUMBER %d is :-  ",i+1);
        scanf("%d",&arr[n]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
       { 
        // arr[i]=arr[i]+10;
        printf("\nTHE ENTRED INDEX %d AFTER CHANGING IS %d ",i,arr[i]);
       } 
        else
        {
            // arr[i] = arr[i]*2;
        printf("\nTHE ENTRED INDEX %d AFTER CHANGING IS %d ",i,arr[i]);
        }
    }
    return 0;
}