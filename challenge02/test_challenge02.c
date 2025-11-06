#include <assert.h>
#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b) {
    return a - b;
}
int multiplicacion(int a, int b) {
    return a * b;
}
int division(int a, int b) {
    if (b == 0) {
<<<<<<< HEAD
        printf("Error: Division por cero.\n");
=======
        printf("division entre 0\n"); // Mensaje requerido al dividir por cero
>>>>>>> 0a7790077eb5862ed31b44f8e5c921765b4ebeee
        return 0; // Manejo simple de división por cero
    }
    return a / b;
}

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
