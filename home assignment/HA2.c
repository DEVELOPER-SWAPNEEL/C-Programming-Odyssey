#include <stdio.h>
int main()
{
   float unit,b,c,d,e,f,c2,d2,e2,f2;
   char name[20];

   printf("\n\nENTRE THE NAME OF THE CONSUMER:- ");

   scanf("%s",&name);

   printf("\n\nENTRE THE AMOUNT OF UNITS CONSUMED BY THE CUSTOMER:-\t");
   scanf("%f",&unit);

   
   
    if(unit<=200)
    {
        b=(unit*0.8)+100;

        printf("\n\nIF USER %s HAVE USED %.2f UNITS THEN TOTAL AMOUNT IS %.2f\n\n",name,unit,b);
    }   

    if(unit>200 && unit<=300)

    {
        c=(unit-200)*0.9;
        c2=260+c;

        printf("\n\nIF USER %s HAVE USED %.2f UNITS THEN TOTAL AMOUNT IS %.2f\n\n",name,unit,c2);
    }  
    
    

     if(unit>300 && unit<=350 )
    {
        d=(unit-300);
        d2=350+d;//d2 max= ₹400

        printf("\n\nIF USER %s HAVE USED %.2f UNITS THEN TOTAL AMOUNT IS %.2f\n\n",name,unit,d2);
    }

    if (unit>350)
    {
        e=400+(unit-350);//if the unit is 350 units then the total amount is ₹400
        f=e*1.15;
        printf("\n\nIF USER %s HAVE USED %.2f UNITS THEN TOTAL AMOUNT IS %.2f\n\n",name,unit,f);
    }

return(0);
}