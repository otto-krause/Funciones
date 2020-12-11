#include <stdlib.h>
#include <stdio.h>
void FuerzaYsuperficie (float N1,float N2);
 int main ()
 {
     float N1,N2;
     FuerzaYsuperficie( N1, N2);//idem ejercicio anterior.
     return 0;
 }
 void FuerzaYsuperficie (float Num1,float Num2)
 {
     float p=0;

    printf ("Ingresar la fuerza ");
    scanf ("%f",&Num1);
    printf ("Ingresar la superficie ");
    scanf ("%f",&Num2);
    p=Num1/Num2;
    system ("cls");
    printf ("La presion es %2.f",p);
 }

