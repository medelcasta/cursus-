#include <stdio.h>

#include "ft_strnstr.c"
int main() {
    const char* text = "Hola, mundo";
    int start = 7;
    int length = 5;

    char* result = ft_substr(text, start, length);
    if (result) {
        printf("Subcadena: %s\n", result); // Salida: mundo
        free(result); // Liberar la memoria asignada
    } else {
        printf("Error al asignar memoria\n");
    }

    return 0;
}