//WE CAN TAKE 1 STEP,2STEP,3STEP
#include<stdio.h>
int stair(int n){
    if(n==1||n==2) return n;
    if(n==3)return 4; 
    int Totalways= stair(n-1) + stair(n-2) + stair(n-3);
    return Totalways;
}
int main()
{
    int n;
    printf("\nENTRE THE VALUE OF N :- ");
    scanf("%d",&n);
    printf("%d",stair(n));
   
    return 0;
}