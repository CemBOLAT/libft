#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*res;
	unsigned int	i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	res = (char *)malloc(i + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i,s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
