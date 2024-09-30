#include <strings.h>
#include <stdio.h>

#include "ft_strchr.c"
int main(){
    const char src[] = "Hola";
    printf("%s\n", ft_strchr(src, 98));
}