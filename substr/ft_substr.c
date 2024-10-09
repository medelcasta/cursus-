#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para calcular la longitud de una cadena
int ft_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Función para extraer una subcadena
char *ft_substr(const char *string, int start, int length) {
    int str_length = ft_strlen(string);
    
    // Ajustar el índice de inicio si es negativo
    if (start < 0) {
        start += str_length;
    }
    
    // Verificar si el índice de inicio es válido
    if (start < 0) {
        start = 0;
    }
    if (start >= str_length) {
        return NULL; // Si el índice es mayor o igual que la longitud, devolver NULL
    }

    // Ajustar la longitud si excede el tamaño de la cadena
    if (start + length > str_length) {
        length = str_length - start;
    }

    // Reservar memoria para la nueva cadena
    char *result = (char *)malloc(length + 1);
    if (!result) {
        return NULL; // Comprobar si la memoria se ha asignado correctamente
    }

    // Copiar la subcadena
    for (int i = 0; i < length; i++) {
        result[i] = string[start + i];
    }
    result[length] = '\0'; // Asegurarse de que la cadena esté terminada en null

    return result;
}
