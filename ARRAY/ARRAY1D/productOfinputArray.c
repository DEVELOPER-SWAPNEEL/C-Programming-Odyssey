#include<stdio.h>
int main()
{
    int n;
    printf("\nENTRE THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY:- ");
    scanf("%d",&n);

    int arr[n];

    for(int i=1;i<=n;i++)
    {
        printf("\nELEMENT NUMBER %d :- ",i);
        scanf("%d",&arr[i]);
    }
    int pro=1;
    for(int j=1;j<=n;j++)
    {
        pro=pro*arr[j];
    }
    printf("\nTHE PRODUCT OF THE INPUT NUMBERS IS:- %d ",pro);


    return 0;
}