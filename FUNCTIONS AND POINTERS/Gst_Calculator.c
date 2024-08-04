#include<stdio.h>

void gst(float arr[3]){
    for(int i = 0; i < 3; i++){
        float gg = arr[i] * 0.18; // Calculate GST
        float price_with_gst = arr[i] + gg; // Calculate price including GST
        printf("THE PRICE OF ITEM %d AFTER GST IS: %.2f\n", i+1, price_with_gst);
    }
}

int main(){
    float arr[3];
    printf("ENTER THE PRICE OF THREE ITEMS:\n");
    for(int i = 0; i < 3; i++){
        printf("ENTER THE PRICE OF ITEM %d: ", i+1);
        scanf("%f", &arr[i]); // Use & to pass the address
    }
    
    printf("THE PRICE OF THE PRODUCTS AFTER GST WILL BE:\n");
    gst(arr); // Call the gst function with the array

    return 0;
}
