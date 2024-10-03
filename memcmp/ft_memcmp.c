#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n){
    int i;
    i = 0;
    
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;
    while( i< n ){
        if(p1[i] != p2[i]){
            return (p1[i] - p2[i]);
        }
        i++;
    }

}