#include <string.h>

char * ft_strrchr(const char *s, int c){
    int i;

    i = 0;
    while(s[i] != '\0'){
        i++;
    }
    while(s[i - 1] != '\0'){
        if(s[i - 1] == (char)c){
            return (char *)s;
        }
        i--;
    }
    if(s[i]== '\0'){
        return (char *)s;
    }
    return NULL;

}