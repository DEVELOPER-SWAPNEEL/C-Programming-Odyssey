#include<stdio.h>
void func(int a){
    if( a%2 == 0){printf("\nTHE PROVEIDED NUMBER IS EVEN\n");}
    else {printf("\nTHE ENTRED NUMBER IS ODD \n");}
    return;
}

int main()
{
    int x;
    printf("\nENTRE THE NUMBER :- ");
    scanf("%d",&x);
    func(x);
    return 0;
}