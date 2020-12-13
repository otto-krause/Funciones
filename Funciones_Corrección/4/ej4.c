#include <stdlib.h>
#include <stdio.h>
void FuerzaYsuperficie ();
 int main ()
 {
     FuerzaYsuperficie( );
     return 0;
 }
 void FuerzaYsuperficie ()
 {
     float N1,N2;
     float p=0;

    printf ("Ingresar la fuerza ");
    scanf ("%f",&N1);
    printf ("Ingresar la superficie ");
    scanf ("%f",&N2);
    p=N1/N2;
    system ("cls");
    printf ("La presion es %2.f",p);
 }

