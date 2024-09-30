#include <string.h>
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize){
    size_t	i;
	size_t j;

	i = 0;
	j = 0;
	while(src[j] != '\0'){
		j++;
	}
	if (dstsize < 1)
		return (0);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	return(j);

}