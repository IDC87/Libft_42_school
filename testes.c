#include "libft.h"

char
	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}

int main(void)
{
  const char *str = "Try not. Do, or do not. There is no try.";
  char target = '\0';
  const char *result = str;
 
  while((result = ft_strchr(result, target)) != NULL) {
    printf("Found '%c' starting at '%s'\n", target, result);
    ++result; // Increment result, otherwise we'll find target at the same location
  }
}