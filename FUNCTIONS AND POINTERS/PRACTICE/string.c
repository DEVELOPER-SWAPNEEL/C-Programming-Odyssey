//WAP to pass string as param" in a func" and replace 'a' to 'o'
#include<stdio.h>
#include<string.h>
void replace_a_to_o(char s[])
{
    int n=0;
    for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a') s[i]='o';
	}
    printf("\n AFTER CHANGING THE SEQUENCE :- %s",s);
        return;
}

int main()
{
    char ch[1000];
    printf("ENTRE THE STRING :- ");
    scanf("%[^\n]s",ch);
    printf("\nBEFORE CHANGING THE SEQUENCE :- %s",ch);
    replace_a_to_o(ch);
    return 0;
}

