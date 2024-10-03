#include <stdio.h>
#include <string.h>

#include "ft_memcmp.c" 
int main(){
    char s1[]= "baaaa";
    char s2[] = "caaaa";
    size_t n = 4;

    int res = ft_memcmp(s1, s2, n);
    printf("%d\n", res);
}