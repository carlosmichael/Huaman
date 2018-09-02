#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Esta funcion va a realizar la suma, resta ,multiplicacion, division, factorial de A Y B
    int n1;
    int n2;
    printf("Ingrese A: ");
    scanf("%d", &n1);
    printf("Ingrese B: ");
    scanf("%d", &n2);

    printf("A = %d", n1);
    printf("\nB = %d", n2);

    printf("\nLa suma de %d + %d es: %d", n1, n2, Suma(n1,n2));
    printf("\nLa resta de %d - %d es: %d", n1, n2, Resta(n1,n2));
    printf("\nLa multiplicacion de %d * %d es: %d", n1, n2, Multiplicacion(n1,n2));
    if(n2 == 0)
    {
        printf("\nNo se puede dividir por cero");
    }
    else
    {
        printf("\nLa division de %d / %d es: %d", n1, n2, Division(n1,n2));
    }
    printf("\nLa factorial de ! %d es: %d", n2, Factorial(n2));



    return 0;
}

int Suma(int a, int b)
{
    // Esta funcion va a realizar la suma de A y B
    int respuesta = 0;
    respuesta = a + b;
    return respuesta;
}

int Resta(int a, int b)
 {
     // Esta funcion va a realizar la resta de A y B
   int respuesta = 0;
   respuesta = a - b;
   return respuesta;


 }

 int Multiplicacion(int a, int b)
 {
     // Esta funcion va a realizar la multiplicacion  de A y B
     int respuesta = 0;
     respuesta = a * b;
     return respuesta;

 }

 int Division(int a, int b)
 {
     // Esta funcion va a realizar la division de A y B
     int respuesta = 0;
     respuesta = a / b;
     return respuesta;

 }
int Factorial(int b)
 {
     // Esta funcion va a realizar la factorial de B
     int i;
     int respuesta = 1;
     for(i=1; i<=b; ++i)
        {
            respuesta *= i;
        }
     return respuesta;
 }





