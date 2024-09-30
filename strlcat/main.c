#include <stdio.h>
#include <strings.h>

#include "ft_strlcat.c"
int main(){
    char dst[] = "mundo";
    const char src[]="hola";
    printf("%zu\n", ft_strlcat(dst, src, 5));
}