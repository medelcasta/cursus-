#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ft_split.c"

// Función principal para probar ft_split
int main() {
    const char *str = "Hola,esto,es,una,prueba";
    char delimiter = ',';

    char **split_result = ft_split(str, delimiter);
    if (split_result) {
        for (int i = 0; split_result[i] != NULL; i++) {
            printf("Subcadena %d: %s\n", i, split_result[i]);
            free(split_result[i]); // Liberar cada subcadena
        }
        free(split_result); // Liberar la memoria del array
    }

    return 0;
}