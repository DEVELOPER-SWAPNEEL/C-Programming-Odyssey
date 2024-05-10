#include<stdio.h>
void nik(int n){
    if(n==0)return ;
    
    nik(n-1);
     printf("%d\n",n);
    return;
}

    int main()
{
    int n;
    printf("ENTRE THE VALUE:- ");
    scanf("%d",&n);
    nik(n);
    return 0;
}
