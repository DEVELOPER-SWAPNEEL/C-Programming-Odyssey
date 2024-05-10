#include<stdio.h>
void freq(int a){
    int even=0,odd=0;
    while(a!=0){
        int rem =a%10;
        if(rem%2==0){even++;}
        else{odd++;}
    }
        printf("\nTHE FREQUENCY OF EVEN NUMBERS IS :- %d \n THE FREQUENCY OF ODD NUMBERS IS :- %d",even,odd);
    return;
}
int main()
{
    int n;
    printf("\nENTRE THE NUMBER :- ");
    scanf("%d",&n);
    freq(n);
}