# Simulación de pipeline local con Makefile
CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=starter.c
MAIN=main.c
TARGET=programa.exe
TEST_TARGET=test_challenge06.exe

# Regla por defecto
all: build test package

# Compila el programa principal
build: $(SRC) $(MAIN)
	$(CC) $(CFLAGS) -o $(TARGET) $(MAIN) $(SRC)

# Ejecuta las pruebas unitarias
test: $(SRC) test_challenge06.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) test_challenge06.c $(SRC)
	./$(TEST_TARGET)

# Empaqueta el binario en dist/
package: build
	mkdir -p dist
	cp $(TARGET) dist/

# Limpieza
clean:
	rm -f $(TARGET) $(TEST_TARGET)
	rm -rf dist
