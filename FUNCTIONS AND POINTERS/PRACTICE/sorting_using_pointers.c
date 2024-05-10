//WAP to find the largest and smallest elements present in the array using pointer
#include<stdio.h>
int main(){
    int n;
    printf("ENTRE THE NO. OF ELEMENTS YOU WANT IN THE ARRAY :- ");
    scanf("%d",&n);
    int arr[n];
    int *p = arr;
    int lar,sma;
    for(int i=0;i<n;i++){
        printf("\nENTRE THE %dTH ELEMENT:- ",i+1);
        scanf("%d",&arr[i]);
    }
	lar=sma=*p;
	for(int i=0;i<n;i++,p++)
	{
		if(lar<*p)
		lar=*(p);
		if(sma>*p)
		sma=*(p);
	}
	printf("The largest of the elements of the array is: %d\n",lar);
	printf("The smallest of the elements of the array is: %d\n",sma);
	return 0;
}