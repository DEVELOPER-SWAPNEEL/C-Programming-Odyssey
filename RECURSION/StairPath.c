/*THE QUESTION STATES THAT THERE IS A STAIR CASE AND YOU ARE AT THE GROUND FLOOR
AND YOU NEED TO FIND THE NUMBER OF WAYS THROUGH WHICH YOU CAN CLIMB UP TO A PARTICULAR 
NUMBER OF STAIR LET IT BE 5.AND WE ARE ONLY ALLOWED TO TAKE 1 STEP OR 2 STEP AT A TIME.
TO SOLVE THIS PROBLEM .THE LOGIC IS THAT 
WE HAVE TWO WAYS 1ST STAIR JUMP
2ND STARE JUMP ON A SINGLE JUMP*/
#include<stdio.h>
int stair(int n){
    // if(n==1||n==2)return n; or 
    if(n==1)return 1;
    if (n==2)return 2;
    int Totalways= stair(n-1) + stair(n-2);
    return Totalways;
}
int main()
{
    int n;
    printf("\nENTRE THE VALUE OF N :- ");
    scanf("%d",&n);
    printf("%d",stair(n));
   
    return 0;
}