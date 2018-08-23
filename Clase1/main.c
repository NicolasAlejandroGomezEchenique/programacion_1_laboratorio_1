#include <stdio.h>
#include <stdlib.h>

int main()//Punto de entrada
{
    int unNumero ;
    float NumeroDos ;
    char unCaracter ;

    printf("ingrese un  numero: ");
    scanf("%d", &unNumero);
    printf("el numero ingresado es : %d\n", unNumero);
    fflush(stdin);
    printf("ingrese un caracter : ");
    scanf("%c", &unCaracter);
    printf("el caracter ingresado es : %c\n", unCaracter);

    printf("ingrese otro  numero: ");
    scanf("%f", &NumeroDos);
    printf("el otro numero ingresado es : %f\n", NumeroDos);




    /*printf("El numero es: %f \t, y el otro numero es: %d\n" , NumeroDos , unNumero);
    printf(" el caracter es: %c", unCaracter);*/

    return 0;
}
