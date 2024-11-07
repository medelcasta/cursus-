#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	cont;

	cont = 0;
	while (*s)
	{
		f(cont, s);
		s++;
		cont++;
	}
}