#include<stdio.h>
#include<string.h>

void change_case(char str[]){
    int n=0;
    char ch;
    while (str[n]!='\0')
    {
        ch = str[n];
        if(n%2==0) 
        {
            if (ch >='A'&& ch<='Z') str[n]+=32;
            if (ch >='a'&& ch<='z') str[n]-=32;
        }
        else {
            str[n]=0;
        }
        n++;
        puts(str);
            }
    
}

int main()
{
    char arr[1000];
    printf("\nENTRE THE STRING  :- ");
    scanf("%[^\n]s",&arr);
    change_case(arr);
    return 0;
}