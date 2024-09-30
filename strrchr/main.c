#include <strings.h>
#include <stdio.h>

#include "ft_strrchr.c"

int main() {
    const char* text = "Hola, mundo!";
    int ch = 0;
    char* result = ft_strrchr(text, ch);
    printf("Última aparición del carácter '%c' encontrada en: %s\n", ch, result);
}