#include<stdio.h>
int count(int n){
    if(n==0) return 1;
    return 1 + count(n/10);
}
int main(){
    int i;
    printf("ENTRE THE VALUE OF N:- ");
    scanf("%d",&i);
    int result = count(i);
    printf("THE NO. OF DIGITS PRESENT IN THE NUMBER IS :- %d ",result -1);
    return 0;
}