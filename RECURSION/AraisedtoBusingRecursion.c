#include<stdio.h>
// #include<math.h>
int power (int a , int b){
    if(b==0) return 1;
    int res = a*power(a,b-1);
    return res;
}
int main()
{
    int a,b;
    printf("ENTRE THE VALUE OF A:- ");
    scanf("%d",&a);
    printf("ENTRE THE VALUE OF B:- ");
    scanf("%d",&b);
    int res =power(a,b);
    printf("%d",res);
    return 0;
}