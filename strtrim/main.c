#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ft_strtrim.c"
// Función principal para probar el código
int main() {
    const char *text = "            Hola, mario!        ";

    char *result = ft_strtrim(text);
    if (result) {
        printf("Cadena recortada: '%s'\n", result); 
        free(result); 
    } else {
        printf("Error al recortar la cadena\n");
    }

    return 0;
}