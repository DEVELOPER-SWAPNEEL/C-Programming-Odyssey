#include<stdio.h>
int main(){
    printf("ENTRE THE NUMBER:-  ");
    int sum=0,n,count=0;
    scanf("%d",&n);
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        n=n/10;
        count++;
    }
        printf("\nTHE SUM OF THE DIGITS OF THE ENTRED NUMBER IS :- %d AND DIGITS AS %d ",sum,count);
        return 0 ;
}