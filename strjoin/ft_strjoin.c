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

char *ft_strjoin(const char *s1, const char *s2, const char *delimiter) {
    int len1 = 0;
    int len2 = 0;
    int len_delim = 0;

    if (s1 != NULL)
        len1 = ft_strlen(s1);

    if (s2 != NULL) 
        len2 = ft_strlen(s2);
 
    if (delimiter != NULL) 
        len_delim = ft_strlen(delimiter);

    char *result = (char *)malloc(len1 + len2 + len_delim + 1); 
    if (result == NULL)
        return NULL; 


    if (s1 != NULL) 
        strcpy(result, s1);

   
    if (delimiter != NULL) 
        strcpy(result + len1, delimiter);

    if (s2 != NULL) 
        strcpy(result + len1 + len_delim, s2);

    return result; 
}

