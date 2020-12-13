#include <stdlib.h>
#include <stdio.h>
void PerimetroYarea ();
 int main ()
 {
     PerimetroYarea();
     return 0;
 }
 void PerimetroYarea()
 {
     int N1,N2;
     int p=0;
     int r=0;
     printf ("Ingresar uno de los lados del rectangulo\n");
     scanf("%d",&N1);
      printf ("Ingrese el otro lado del rectangulo\n");
     scanf("%d",&N2);
     p=2*N1+2*N2;
     r=N1*N2;
     system ("cls");
     printf("El perimetro es %d",p);
     printf(" el area es %d",r);
 }
