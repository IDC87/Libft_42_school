#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    if(!s)
        return (0);
        
    i = 0;
    str = (char *)malloc(sizeof(*s) * strlen(s));    

    if(str == NULL)
        return (NULL);

    while(i < len && start < strlen(s))
    {
        str[i] = s[start];
        start++;
        i++;
    }
    str[i] = '\0';    
    

    return(str);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *str;

    str = (char *)malloc(sizeof(*s1) * (strlen(s1)));

    i = 0;
    j = strlen(s1);
    while(strchr(set, s1[i]) != NULL)
    i++;
    while(strchr(set, s1[j]) != NULL)
    j--;



       printf("counting: %d", j);

    return (ft_substr(s1, 0, i + 1 ));
}

int main(int arcg, char **argv)
{
    char *s1 = argv[1];
    char *set = argv[2];

    printf("\n%s\n\n", ft_strtrim(s1, set));

    return (0);
}