//WAP to add all elements of an array using pointer
#include<stdio.h>
int main(){
    int arr[5];
    int sum=0;
    int *ptr = arr;
    for(int i=0;i<5;i++)
    {
        printf("ENTRE THE %dTH ELEMENT :- ",i+1);
        scanf("%d",&arr[i]);

    }
       for(int i=0;i<5;i++)
       {
        sum+= *(ptr++);
       }
        printf("%d",sum);
}
