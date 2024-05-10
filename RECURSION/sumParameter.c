#include<stdio.h>
void sum (int x ,int y){
    if(x==0){
        printf("%d",y);
        return;
    }
    sum(x-1,y+x);
    return;
}

int main()
{
    int n;
    printf("ENTRE THE VALUE:- ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
    