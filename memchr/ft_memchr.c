#include <string.h>
void *ft_memchr(const void *s, int c, size_t n){
    const unsigned char *p = (const unsigned char *)s;
    int i;
    i = 0;
    while(i < n){
        if(p[i] == (unsigned char)c){
            return (void *)(p + i);
        }
        i++;
    }
    return NULL;
}