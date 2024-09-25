#include <stdio.h>
#include "ft_isalpha.c"

int	main()
{
	int c;
    int d;

	c = 9;
    d = 'd';

	printf("\n%d", ft_isalpha(c));
    printf("\n%d", ft_isalpha(d));
}