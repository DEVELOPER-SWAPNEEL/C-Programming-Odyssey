#include<stdio.h>
int sum(int a){
    if(a==0||a==1)return a;
    int result = a+sum(a-1);
    return result;
}

    int main()
{
    int n;
    printf("ENTRE THE VALUE:- ");
    scanf("%d",&n);
    int rest =sum(n);
    printf("%d",rest);
    return 0;
}
