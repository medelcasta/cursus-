#include <strings.h>
#include <stdio.h>

#include "ft_strrchr.c"

int main(){
    char src[] = "mario";
    printf("%s\n", ft_strrchr(src, 97));
}