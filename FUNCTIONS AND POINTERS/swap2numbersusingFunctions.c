#include<stdio.h>
void swap(int a,int b)
{
    int temp = a;
    a=b;
    b=temp;
    printf("after swaping the value of A = %d and B = %d ",a,b);
    return ;
}
int main()
{
    int a,b;
    printf("ENTRE THE VALUE OF A = ");
    scanf("%d",&a);
    printf("ENTRE THE VALUE OF B = ");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}