#include<stdio.h>
void dec(int y){
    if(y==0)return;
    printf("%d\n",y);
    dec(y-1);
    return;
}
void inc (int x , int y){
    if(x>y)return;
    printf("%d\n",x);
    inc(x+1,y);
    return;
}
    int main()
    {
        int n,m=1;
        printf("ENTRE THE VALUE OF N :- ");
        scanf("%d",&n);
        dec(n);
        inc(m,n);
        return 0;
    }