#include <stdio.h>
#include "calc.h"

int division(int a, int b)
{
    if (b == 0) {
        printf("division entre 0\n"); // Mensaje requerido al dividir por cero
        return 0; // Manejo simple de división por cero
    }
    return a / b;
}