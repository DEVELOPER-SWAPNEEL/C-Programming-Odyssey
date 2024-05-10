//WAP to find the largest of threee nos using pointer
#include<stdio.h>
int main(){
    int n,m,k;
    printf("ENTRE THE FIRST, SECOEND AND THIRD NUMBERS :- ");
    scanf("%d%d%d",&n,&m,&k);
    int *qwe= &n;
    int *asd =&m;
    int *zxc = &k;
    if(*qwe>*asd && *qwe>*zxc) printf("%d is largest of the three. ",*qwe);
    if(*qwe<*asd && *asd>*zxc) printf("%d is largest of the three. ",*asd);
    if(*zxc>*asd && *qwe<*zxc) printf("%d is largest of the three. ",*zxc);
    return 0;
}