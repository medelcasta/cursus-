#include <stdio.h>
#include <string.h>

#include "ft_memchr.c" 
int main(){
   char s[] = "hola";
   int c = 97;
   size_t n = 4;

   printf("%p\n", ft_memchr(s, c, n));
}