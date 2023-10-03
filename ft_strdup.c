#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t i;
    char *s2;

    s2 = (char *)malloc(ft_strlen(s1) + 1);
    if(s2 == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}