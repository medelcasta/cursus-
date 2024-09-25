#include <stdio.h>
#include <strings.h>

#include "ft_memcpy.c"

int main(){
    char dst[20];
    char src[]= "aurora";
    int n = 3;
    ft_memcpy(dst, src, n);
    printf("\n%s", dst);
}