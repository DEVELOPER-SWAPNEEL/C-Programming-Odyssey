#include<stdio.h>
void add_2(int *arr,int n){
        for(int i=0;i<n;i++){
            printf("ELEMENT NUMBER %d AFTER ADDITION:   %d\n",i+1,*(arr+i)+2);
        }
    return;
}
int main(){
    int n;
    printf("ENTRE THE SIZE OF THE ARRAY:   ");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("ENTRE THE VALUE OF ELEMENT %d :     ",i+1);
        scanf("%d",(ptr+i));
    }
    printf("\n\nTHE INPUT ARRAY IS :    ");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
    printf("\n\n");
    add_2(arr,n);
    return 0;
}
