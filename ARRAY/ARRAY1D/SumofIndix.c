#include<stdio.h>
int main()
{
    int sumeve=0,sumodd=0,diff=0;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(i%2==0) sumeve+=arr[i];
        else sumodd+=arr[i];
    }
    diff=sumeve-sumodd;
    printf("\nTHE DIFFERENCE IS %d \n",diff);
    return 0;
}