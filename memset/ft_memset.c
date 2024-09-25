#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

int	main()
{

    char s[] = "aurora";

	printf("%s\n", s); //muestra s 
	ft_memset(s, 'f', 5);
	printf("%s\n", s); // muestra s editado con f hasta 5
}