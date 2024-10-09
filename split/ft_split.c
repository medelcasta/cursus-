#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize){
    size_t	i;
	size_t j;

	i = 0;
	j = 0;
	while(src[j] != '\0'){
		j++;
	}
	if (dstsize < 1)
		return (0);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	return(j);

}
// Función para contar las subcadenas en base al delimitador
int count_substrings(const char *str, char delimiter) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (*str != delimiter && !in_word) {
            in_word = 1;
            count++;
        } else if (*str == delimiter) {
            in_word = 0;
        }
        str++;
    }
    return count;
}

// Función que duplica una subcadena
char *ft_substring(const char *start, int length) {
    char *sub = (char *)malloc(length + 1);
    if (!sub) {
        return NULL;
    }
    ft_strncpy(sub, start, length);
    sub[length] = '\0';
    return sub;
}

// Función para dividir una cadena en subcadenas usando un delimitador
char **ft_split(const char *str, char delimiter) {
    if (!str) return NULL;

    int num_substrings = count_substrings(str, delimiter);
    char **result = (char **)malloc((num_substrings + 1) * sizeof(char *));
    if (!result) return NULL;

    int index = 0;
    const char *start = str;
    int length = 0;

    while (*str) {
        if (*str != delimiter) {
            if (length == 0) {
                start = str; // Marca el inicio de una subcadena
            }
            length++;
        } else if (length > 0) {
            result[index++] = ft_substring(start, length); // Añadir la subcadena al resultado
            length = 0;
        }
        str++;
    }

    if (length > 0) {
        result[index++] = ft_substring(start, length); // Añadir la última subcadena
    }

    result[index] = NULL; // Termina con un NULL
    return result;
}

// Función para liberar la memoria de los resultados de ft_split
void free_split(char **split) {
    int i = 0;
    while (split[i]) {
        free(split[i]);
        i++;
    }
    free(ft_split);
}