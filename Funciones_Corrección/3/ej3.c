#include <stdlib.h>
#include <stdio.h>
void Porcentaje ();
 int main ()
 {
     Porcentaje();
     return 0;
 }
 void Porcentaje()
 {
    int N1,N2;
     float pf=0;

 printf ("Ingresar la cantidad total de personas ");
    scanf ("%d",&N1);
    printf ("Ingresar la cantidad de mujeres ");
    scanf ("%d",&N2);
    pf=N2*100/N1;
    system ("cls");
    printf ("El porcentaje de mujeres es %7.2f",pf);
    printf(" y el porcentaje de hombres es %7.2f",100-pf);


 }
