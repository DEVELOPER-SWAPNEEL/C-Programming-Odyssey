#include <stdio.h>
int main()
{
    int a,b,c,d,e,entry1;
    printf("ENTRE THE TYPE OF ITEM PURCHASED BY THE CUSTOMER\n              1 FOR MILL CLOTH\n              2 FOR HANDLOOM ITEMS:-  ");
    scanf("%d",&entry1);
    printf("\n\nENTRE THE TOTAL AMOUNT OF PURCHASE MADE BY THE CUSTOMER:-   ");
    scanf("%d",&a);
    if (entry1==1)
    {

        if (a>=0 && a<=100)
        {          
            printf("%d",a);
        }
        if (a>=101 && a<=200)
        {
            b=a*(95/100);

            printf("%d",b);
        }
        if (a>=201 && a<=300)
        {
            c=a*(925/1000);

            printf("%d",c);
        }
        if (a>=300)
        {
            d=a*(90/100);

            printf("%d",d);
        }
    }


    if (entry1==2)
    {

        if (a>=0 && a<=100)
        {     
            e=a*(95/100);
            printf("%d",e);
        }
        if (a>=101 && a<=200)
        {
            b=a*(925/1000);

            printf("%d",b);
        }
        if (a>=201 && a<=300)
        {
            c=a*(90/100);

            printf("%d",c);
        }
        if (a>=300)
        {
            d=a*(85/100);

            printf("%d",d);
        }
    }
    return (0);
}