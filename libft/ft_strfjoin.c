#include "libft.h"

char    *ft_strfjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_bzero(str, len + 1);
	ft_strcat(str, s1);
	if (s1)
	{
		free((char*)s1);
		s1 = NULL;
	}
	ft_strcat(str, s2);
	return (str);
}
