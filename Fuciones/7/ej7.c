#include <stdlib.h>
#include <stdio.h>
void MayorDeDosNumeros ();
 int main ()
 {
     int N1,N2;
     MayorDeDosNumeros ( N1, N2);
     return 0;
 }
 void MayorDeDosNumeros (int Num1,int Num2)
 {
    printf ("Ingresar un numero ");
    scanf ("%d",&Num1);
     printf ("Ingresar otro numero ");
    scanf ("%d",&Num2);
    system ("cls");
    if (Num1==Num2)
    {
        printf ("Son iguales");
    }
    else
    {
        if (Num1>Num2)
        {
            printf ("El mayor es %d",Num1);
        }
        else
{
            printf ("El mayor es %d",Num2);
        }
    }
    return 0;
 }
