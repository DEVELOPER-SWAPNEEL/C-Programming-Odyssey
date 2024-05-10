#include<stdio.h>
int main(){
    printf("ENTRE THE NO. OF LINES:-  ");
    int n;
    scanf("%d",&n);
    int dec=65+n;
    for(int i=0;i<n;i++){
         dec--;
        for(int j=0;j<=i;j++){
            printf("%c",dec);
        }
        printf("\n");
    }
        return 0;
}