#include "Libft.h"

int ft_toupper(int c)
{
    
    if (c >= 'a' && c <= 'z')
    {        
        c = c - 32;
    }
    
    return (c);
}

int main(int argc, char **argv)
{
    int i = 0;

    printf("\n UPPER is %c\n\n", ft_toupper('('));

    char *str = argv[1];

    while(str[i] != '\0')
    {
        printf("%c", ft_toupper(str[i]));
        i++;
    }

    printf("\n\n");

    return (0);
}
