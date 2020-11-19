#include <stdlib.h>
#include <stdio.h>
void PerimetroYarea ();
 int main ()
 {
     int N1,N2;
     PerimetroYarea(N1,N2);
     return 0;
 }
 void PerimetroYarea(int Num1,int Num2)
 {
     int p=0;
     int r=0;
     printf ("Ingresar uno de los lados del rectangulo\n");
     scanf("%d",&Num1);
      printf ("Ingrese el otro lado del rectangulo\n");
     scanf("%d",&Num2);
     p=2*Num1+2*Num2;
     r=Num1*Num2;
     system ("cls");
     printf("El perimetro es %d",p);
     printf(" el area es %d",r);
 }
