/*MAKE A NESTED STRUCTURES WHRE YOU SPECIFY 3 CHARACTERISTICS OF THE HOUSE AND SPECIFY THE INTERIORS IN NESTED FORM*/
#include <stdio.h>
typedef struct house
{
    int size;
    char color[50];
    char type[50];

};

struct interior
{
    int no_sofa;
    int no_fans;
    char need_modification[50];
    struct house nik_interior;
};


int main(){
    struct interior nik_int;
    printf("ENTRE THE SIZE OF THE HOUSE:-   \n");
    scanf("%d",&nik_int.nik_interior.size);
    printf("ENTERE THE COLOR OF THE HOUSE:- ");
    scanf("%s",&nik_int.nik_interior.color);
    printf("ENTRE THE TYPE OF THE HOUSE:-   ");
    scanf("%s",nik_int.nik_interior.type);
    printf("ENTRE THE NUMBER OF FANS:-  ");
    scanf("%d",&nik_int.no_fans);
    printf("ENTRE THE NUMBER OF SOFAS:- ");
    scanf("%d",&nik_int.no_sofa);
    printf("IS MODIFICATION NEEDED:-    ");
    scanf("%d",&nik_int.need_modification);
    printf("COMPLETE INFORMATION OF THE HOUSE:- ");
    printf("SOFA:-  %d\nFAN:-   %d\nNEED MODIFICATION:-     %s\nSIZE:-  %d\nCOLOR:-     %s\nTYPE:-      %s",nik_int.no_sofa,nik_int.no_fans,nik_int.need_modification,nik_int.nik_interior.size,nik_int.nik_interior.color,nik_int.nik_interior.type);

    return 0;
}
