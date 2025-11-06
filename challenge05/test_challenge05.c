#include <stdio.h>
#include <assert.h>

int suma(int a, int b){
    return a + b;
}

void test_suma(){
    
    assert(suma(2, 3) == 5); //suma correcta
  //  assert(suma(-1, 1) == 10); //suma con negativo

    printf("TESTS DE SUMA OK\n");
}

int main(){
    test_suma();

}