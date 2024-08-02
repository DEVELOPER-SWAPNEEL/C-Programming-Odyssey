#include<stdio.h>
void circle();
void rectangle();
void square();
void main(){
int len,br,side,radius;
printf("ENTRE THE MEASUREMENT OF THE SIDE OF THE SQUARE WHOSE AREA IS TO BE FOUND:-  ");
scanf("%d",&side);
printf("ENTRE THE MEASUREMENT OF THE LENGTH AND BREADTH OF THE RECTANGLE WHOSE AREA IS TO BE FOUND:-  ");
scanf("%d",&len);
scanf("%d",&br);
printf("ENTRE THE MEASUREMENT OF THE RADIUS OF THE CIRCLE WHOSE AREA IS TO BE FOUND:-  ");
scanf("%d",&radius);
circle(radius);
rectangle(len,br);
square(side);
return;
}
void circle(int r){
float result= 3.14*r*r;
printf("THE AREA OF THE CIRCLE IS:-  %f\n",result);
return;
}
void rectangle(int l,int b){
int result= l*b;
printf("THE AREA OF THE RECTANGLE IS:-  %d\n",result);
return;
}
void square(int r){
int result= r*r;
printf("THE AREA OF THE SQUARE IS:-  %d\n",result);
return;
}
