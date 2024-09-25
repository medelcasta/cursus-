#include <stdlib.h>
#include <strings.h>

void ft_bzero(void *s, size_t n){

    char *ptr = s;
    while(n > 0){
        *ptr = 0;
        n--;
        ptr++;
    }
    

}