#include<stdio.h>
void greeting(int n){
    if (n==0)  return;
    printf("GOOD MORNING!\n");
    greeting(n-1);
    return;
}
int main()
{
    int n;
    printf("ENTRE THE VALUE:- ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}