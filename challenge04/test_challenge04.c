#include <assert.h>
#include <stdio.h>
#include "calc.h"

int suma(int a, int b);
int resta(int a, int b); 

int multiplicacion(int a, int b);

int division(int a, int b);
//testeo de la funcion suma

void test_de_todo() {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(-2, -3) == -5);

//testeo de la funcion resta
    assert(resta(5, 3) == 2);
    assert(resta(0, 1) == -1);
    assert(resta(-2, -3) == 1);

//testeo de la funcion multiplicacion
    assert(multiplicacion(2, 3) == 6);
    assert(multiplicacion(-1, 1) == -1);
    assert(multiplicacion(-2, -3) == 6);
//testeo de la funcion division
    assert(division(6, 3) == 2);
    assert(division(5, 0) == 0); // División por cero
    assert(division(-6, -3) == 2);
    assert(division(-6, 3) == -2);


    printf("TODO OK\n");
}
int main()
{
    test_de_todo();
    return 0;
}  
