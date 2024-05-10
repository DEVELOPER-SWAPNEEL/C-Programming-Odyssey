//WAP to compare two string using func
#include<stdio.h>
#include<string.h>
void compare (char str[],char ch[])
{
    for(int i=0;str[i] !='\0';i++)
    {
        if(str[i] == ch[i]) printf("\nTHE ENTRED TWO STRINGS ARE EQUAL");
        else{
            printf("\nTHE ENTRED TWO STRINGS ARE NOT EQUAL");
        }
    }
        return;
}
int main()
{
    char s1[1000];
    char s2[1000];
    printf("ENTRE THE STRING 1st :- ");
    scanf("%[^\n]s",s1);
    printf("ENTRE THE STRING 2st :- ");
    scanf("%[^\n]s",s2);
    compare(s1,s2);
    return 0;
}