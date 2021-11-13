#include "Libft.h"

int ft_tolower(int c)
{
    
    if (c >= 'A' && c <= 'Z')
    {        
        c = c + 32;
    }
    

    return (c);
}

// Tambem certo, uma copia inversa do toupper