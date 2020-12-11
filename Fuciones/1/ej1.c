#include <stdlib.h>
#include <stdio.h>
void NumerosEnPantalla ();
 int main ()
 {
     int N1,N2;
     NumerosEnPantalla(N1,N2);
     return 0;
 }
 void NumerosEnPantalla(int Num1,int Num2)//No tiene sentido pasar dos variables son valor asignado.
 {

     printf ("Ingresar un numero\n");
     scanf("%d",&Num1);
      printf ("Ingresar otro numero\n");
     scanf("%d",&Num2);
     system ("cls");
     printf ("Los numeros ingresados son \n%d  \n%d",Num1,Num2);

 }
