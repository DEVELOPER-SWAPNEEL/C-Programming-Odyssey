
#include<stdio.h>
#include<string.h>

    void case_change(char str[]){
        int n =0;
        char ch ;
        while(str[n]!='\0')
        {
            ch=str[n];
            if(ch>='A'&&ch<='Z') str[n]+=32;
            else if(ch>='a'&&ch<='z') str[n]-=32;
            n++;
        }
            puts(str);
            return;
    }
    
int main()
{
    char arr[100];
    printf("\nENTRE THE CHARACTER ARRAY :- ");
    scanf("%[^\n]s",&arr);
    case_change(arr);
    return 0;
   
}  