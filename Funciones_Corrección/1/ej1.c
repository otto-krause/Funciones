#include <stdlib.h>
#include <stdio.h>
void NumerosEnPantalla ();
 int main ()
 {
     NumerosEnPantalla();
     return 0;
 }
 void NumerosEnPantalla ()
 {
    int N1,N2;
    printf ("Ingresar un numero\n");
    scanf("%d",&N1);
    printf ("Ingresar otro numero\n");
    scanf("%d",&N2);
    system ("cls");
    printf ("Los numeros ingresados son \n%d  \n%d",N1,N2);
 }
