#include <stdio.h>
#include <strings.h>

#include "ft_strlcpy.c"
int main(){
    char dst[5];
    const char src[]="adiospeos";
    printf("%zu\n", ft_strlcpy(dst, src, 5));
    printf("%s\n",dst);
    printf("%s\n",src);
}