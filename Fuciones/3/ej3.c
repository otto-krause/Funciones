#include <stdlib.h>
#include <stdio.h>
void Porcentaje ();
 int main ()
 {
     int N1,N2;
     Porcentaje(N1,N2);
     return 0;
 }
 void Porcentaje(int Num1,int Num2)
 {
     float pf=0;

 printf ("Ingresar la cantidad total de personas ");
    scanf ("%d",&Num1);
    printf ("Ingresar la cantidad de mujeres ");
    scanf ("%d",&Num2);
    pf=Num2*100/Num1;
    system ("cls");
    printf ("El porcentaje de mujeres es %7.2f",pf);
    printf(" y el porcentaje de hombres es %7.2f",100-pf);


 }
