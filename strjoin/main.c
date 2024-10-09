#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ft_strjoin.c"
int main() {
    const char *str1 = "aurora";
    const char *str2 = "mario";
    const char *delimiter = " ";

    char *result = ft_strjoin(str1, str2, delimiter);
    if (result) {
        printf("Cadena unida: %s\n", result); // Salida: Hola, mundo
        free(result); // Liberar la memoria asignada
    } else {
        printf("Error al unir las cadenas\n");
    }

    return 0;
}