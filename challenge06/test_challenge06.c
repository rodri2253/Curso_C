#include "starter.h"
#include <stdio.h>
#include <assert.h>

int main(void) {
    printf("Ejecutando pruebas unitarias...\n");

    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(0, 0) == 0);

    printf("Todas las pruebas pasaron correctamente.\n");
    return 0;
}
