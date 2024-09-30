#include <string.h>
char* ft_strrchr(const char* s, int c) {
    char *len = (char *)s;
    while (*len != '\0') {
        len++;
    }

    while (len >= s) {
        if (*len== (char)c) {
            return (char*)len; 
        }
        len--;
    }
    return NULL;
}