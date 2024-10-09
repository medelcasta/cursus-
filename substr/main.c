#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ft_substr.c"

int main() {
    const char* text = "Hola, mundo mario";
    int start = 7;
    int length = 6;

    char* result = ft_substr(text, start, length);
    if (result) {
        printf("Subcadena: %s\n", result); 
        free(result); 
    } else {
        printf("Error al asignar memoria\n");
    }

    return 0;
}