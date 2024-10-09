#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int is_whitespace(char c) {
    return c == ' ' || c == '\n' || c == '\t'; 
}

char *ft_strtrim(const char *str) {
    if (!str) return NULL; 

    while (is_whitespace(*str)) {
        str++;
    }

    if (*str == '\0') return strdup(""); 

    const char *end = str + ft_strlen(str) - 1;
    while (end > str && is_whitespace(*end)) {
        end--;
    }

    // Calcular la longitud de la nueva cadena
    size_t len = end - str + 1;

    // Reservar memoria para la cadena recortada
    char *trimmed = (char *)malloc(len + 1);
    if (!trimmed) return NULL; // Comprobar si la memoria se ha asignado correctamente

    // Copiar la parte recortada a la nueva cadena
    strncpy(trimmed, str, len);
    trimmed[len] = '\0'; // Asegurarse de que esté terminada en null

    return trimmed;
}
