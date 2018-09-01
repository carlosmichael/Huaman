#include <stdio.h>
#include <stdlib.h>

int main()
{
 int letra;

    int n1 = 30;
    int n2 = 10;

    int suma = multiplicacion(n1,n2);

    printf("%d", suma);

    printf("/n/n/n");
    printf("Ingrese letra:/n");
    letra = getchar();



    printf("La letra ingresada fue: ");
    putchar(letra);

    return 0;
}

int suma(int a, int b)
{
    int respuesta = 0;
    respuesta = a + b;
    return respuesta;
}

int resta(int a, int b)
 {
   int respuesta = 0;
   respuesta = a - b;
   return respuesta;


 }

 int multiplicacion(int a, int b)
 {
     int respuesta = 0;
     respuesta = a * b;
     return respuesta;


 }



