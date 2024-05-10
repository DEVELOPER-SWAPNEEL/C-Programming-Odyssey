#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int n,count=0;
    printf("\nENTRE THE VALUE OF THAT NUMBER WHOSE PAIR SUM IF EQUALS TO IT:- ");//5
    scanf("%d",&n);
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
           for(int k=j+1;k<8;k++)
           {
             if(arr[i]+arr[j]+arr[k]==n)
            {
             printf("\nTHE PAIR (%d,%d,%d) SATISFIES THE PROVIDED CONDITION.",arr[i],arr[j],arr[k]);
             count++;
            }
           }
        }
    }
    printf("\n\nTHE NUMBER OF PAIRS SATISFYING THE PROVIDED CONDITION IS:- %d \n\n",count);
    return 0;
}