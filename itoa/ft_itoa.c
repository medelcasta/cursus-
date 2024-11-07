#include <string.h>

static int	count_digits(int n)
{
	int	counter;

	if (n == 0)
		return (1);
	counter = 0;
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static char	*set_numbers(char *str, int n, size_t len)
{
	unsigned int	unsigned_n;

	if (n == 0)
	{
		*str = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		unsigned_n = (unsigned int)n * -1;
		while (len > 1)
		{
			str[--len] = unsigned_n % 10 + '0';
			unsigned_n /= 10;
		}
		str[0] = '-';
		return (str);
	}
	while (len > 0)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = count_digits(n);
	if (n < 0)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (set_numbers(str, n, len));
}