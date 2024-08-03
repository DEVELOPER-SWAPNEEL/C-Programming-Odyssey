#include<stdio.h>
int add(int *a,int *b){
    int sum=*a+*b;
    return sum;
}
int product(int *a,int *b){
    int pro=(*a)*(*b);
    return pro;
}
float average(int *a,int *b){
    float avg=(*a+*b)/2.0;
    return avg;
}
int main(){
    int n,m;
    printf("ENTRE THE NUMBERS YOU WANT TO OPERATE:-    ");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("\nTHE SUM OF THE TWO NNUMBER IS FOUND TO BE:-  %d",add(&n,&m));
    printf("\nTHE PRODUCT OF THE TWO NNUMBER IS FOUND TO BE:-  %d",product(&n,&m));
    printf("\nTHE AVERAGE OF THE TWO NNUMBER IS FOUND TO BE:-  %.2f",average(&n,&m));
    return 0;
}
