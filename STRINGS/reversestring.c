#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("\nENTRE THE STRING :- ");
    scanf("%[^\n]s",str);
    puts(str);
    char nik[50] = str;
    int size = 0;
    int k=0;
while(str[k]!='\0')
{
    size++ ;
    k++ ;
}
int j=size-1;
for(int i =0, j = size-1;i<=j;i++,j--)
{
    char temp = str[i];
    str[i]=str[j];
    str[j]=temp;
}
puts("THE REVERSE STRING IS ");
puts(str);
if(nik == str){
    printf("\nTHE ENTRED STRING IS PALLANDROM\n\n");
}
return 0;
}