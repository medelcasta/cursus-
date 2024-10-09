#include <stdio.h>
#include <stdlib.h>

int main() {
    const char* original = "MARIO QUE TAL!";
    char* copied = ft_strdup(original);

    if (copied != NULL) {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", copied);
        free(copied);
    } else {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}