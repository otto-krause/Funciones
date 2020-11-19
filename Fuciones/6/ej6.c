#include <stdlib.h>
#include <stdio.h>
void OctavaParte (float N1,float p);
 int main ()
 {

float N1,p;
     OctavaParte(N1,p);
     return 0;
 }
 void OctavaParte(float  Num1 , float p)
 {

   printf ("Ingresar un numero ");
   scanf ("%f",&Num1);
   p=Num1/8;
   system ("cls");
   printf ("La octava parte es %f",p);
   return 0;


 }
