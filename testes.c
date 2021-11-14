#include "Libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	res = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = (char *)s + i;
		i++;
	}
	if (c == '\0')
		res = (char *)s + i;
	return (res);
}

int main(void)
{
  const char *str = "Try not. Do, or do not. There is no try.";
  char target = 'T';
  const char *result = str;
 
  while((result = ft_strrchr(result, target)) != NULL) {
    printf("Found '%c' starting at '%s'\n", target, result);
    ++result; // Increment result, otherwise we'll find target at the same location
  }
}