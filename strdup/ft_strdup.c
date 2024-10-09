#include <stdio.h>
#include <stdlib.h>

char* ft_strcpy(char* dest, const char* src) {
    char* original_dest = dest; 

    while (*src != '\0') {
        *dest = *src;  
        dest++;        
        src++;        
    }

    *dest = '\0'; 
    return original_dest;
}

char* ft_strdup(const char* s) {
    if (s == NULL) {
        return NULL;
    }

    size_t length = 0;
    const char* ptr = s;
    while (*ptr != '\0') { 
        length++;
        ptr++;
    }

    char* duplicate = (char*)malloc((length + 1) * sizeof(char));

    if (duplicate == NULL) {
        return NULL; 
    }

    ft_strcpy(duplicate, s);

    return duplicate;
}

