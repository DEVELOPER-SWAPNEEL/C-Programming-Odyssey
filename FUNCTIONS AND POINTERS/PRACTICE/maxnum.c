#include<stdio.h>
int max(int arr[],int n){
        int tempmax = arr[0];
        for(int i=0;i<n;i++){
                if(tempmax<arr[i]) {tempmax=arr[i];}
        }
            return tempmax;
}
int main(){
    int n;
    printf("ENTRE THE VALUE OF N:- ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("ENTRE THE VALUE OF THE INDEX %d :- ",i+1);
        scanf("%d",&arr[i]);
    }
        int result = max(arr,n);
        printf("THE MAX VALUE OF THE ENTRED ARRAY IS:-  %d",result);
        return 0;
}