//#include <iostream>
//#include "Libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



    size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
unsigned int	ft_strlen(const char *str);
    void		*ft_memmove(void *dest, const void *src, size_t n);
    void		*ft_memcpy(void *dest, const void *src, size_t n);

int main()
{
    const char *src = "abcdefghijk\0";
    char *dest1 = (char *)malloc(sizeof(char)*50);
    char *dest2 = (char *)malloc(sizeof(char)*50);
    ft_strlcpy(dest1, src, 24);
    ft_strlcpy(dest2, src, 24);
    
    ft_memmove(dest1+1, dest1, 25);
    ft_memcpy(dest2+1, dest2, 25);
    
    printf("%s \n", dest1);
    printf("%s \n", dest2);
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		buffer[n];
	char		*destcpy;
	char		*source;

	source = (char *)src;
	destcpy = (char *) dest;
	i = 0;
	while (i < n)
	{
		buffer[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destcpy[i] = buffer[i];
		i++;
	}
	return (dest);
}

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*s;
	char			*d;
	size_t			i;

	i = 0;
	s = (const char *)src;
	d = (char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
