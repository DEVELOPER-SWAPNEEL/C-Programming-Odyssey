#include<stdio.h>
int fibo(int n){
    if(n==0||n==1)return 1;
    int result = fibo(n-1) + fibo(n-2);
    return result;
}

//we are here finding the value of the nth fibonacci series wala number.
int main()
{
    int n;
    printf("\nENTRE THE VALUE OF N :- ");
    scanf("%d",&n);
    printf("%d",fibo(n));
   
    return 0;
}