#include <string.h>

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *d;
    const char *s;

    d = dst;
    s = src;
    while(n > 0){
        *d = *s;
        n--;
        d++;
        s++;
    }
    return (dst);
}
    