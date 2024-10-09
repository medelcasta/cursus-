#include <stddef.h> 

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t i;
    size_t j;

    i = 0;  

    if (*needle == '\0') {
        return (char *)haystack;
    }

    while (i < len && haystack[i] != '\0') {

        if (haystack[i] == needle[0]) {
            j = 0;   

            while (i + j < len && haystack[i + j] == needle[j]) {
                j++;
                if (needle[j] == '\0') {
                    return (char *)&haystack[i];
                }
            }
        }
        i++;
    }

    // Si no se encontró 'needle', devolver NULL
    return NULL;
}