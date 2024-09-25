#include <stdio.h>
#include <strings.h>

#include "ft_bzero.c"

int main(){
    char s[] = "abcdefg";
    int i = 0;
    ft_bzero(s, 3);
    while (i<7){
        printf("\n%c", s[i]);
        i++;
    }
    
}