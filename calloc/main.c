#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t num, size_t size);

int main() {
    int *arr;
    size_t num_elements = 5;
    
    // Usamos ft_calloc para asignar memoria para 5 enteros
    arr = (int *)ft_calloc(num_elements, sizeof(int));

    if (arr == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    // Mostramos los valores inicializados a 0
    for (size_t i = 0; i < num_elements; i++) {
        printf("arr[%lu] = %d\n", i, arr[i]);
    }

    // Liberamos la memoria asignada
    free(arr);

    return 0;
}