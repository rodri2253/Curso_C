int suma(int a, int b) {
    return a + b;
}

//testeo de la funcion suma
#include <assert.h>
void test_suma() {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(-2, -3) == -5);

    printf("All tests passed!\n");

}