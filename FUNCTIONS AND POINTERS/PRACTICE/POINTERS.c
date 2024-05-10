//WAP to add,substract & multiply two nos. using pointer
#include<stdio.h>
int main(){
    int n,m;
    printf("ENTRE THE FIRST NUMBER :- ");
    scanf("%d",&n);
    printf("ENTRE THE secoend NUMBER :- ");
    scanf("%d",&m);
    int *ptr = &n; 
    int *qwe = &m;
    int sum = *ptr + *qwe;
    int substract = *ptr - *qwe;
    int multiply = (*ptr) * (* qwe);
    printf("\nIF THE PROVIDED NUMBERS ARE %d AND %d THEN \n THE SUM OF THE TWO DIGITS IS :- %d \n THE SUBSTRACTION OF THOES IS :- %d \n THE MULTIPLICATION OF THOES WILL BE :- %d ",n,m,sum,substract,multiply);
    return 0;
}