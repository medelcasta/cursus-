#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	size_t	iter;
	char	*ret;

	len_s = ft_strlen(s);
	iter = 0;
	ret = (char *)ft_calloc(1, len_s + 1);
	if (!ret)
		return (NULL);
	while (s[iter])
	{
		ret[iter] = f(iter, s[iter]);
		iter++;
	}
	ret[iter] = 0;
	return (ret);
}