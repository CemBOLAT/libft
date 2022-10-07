
#include "libft.h"

char *ft_strtrim(char const *s1, char const set)
{
	int	i;
	int	len;
	char	*res;
	int	end;
	int	start;

	end = 0;
	start = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	len = i;
	i = 0;
	while (s1[i++] != '\0' && s1[i] == set)
		start++;
	while (s1[len--] != '\0' && s1[i] == set)
		end++;
	res = (char *)malloc(len - end - start + 1);
	if (res == NULL)
		return (res);
	i = 0;
	while (s1[start++] != '\0' && start < len - end)
		res[i] = s1[start];
	return (res);
}

int	main()
{
	char const *s1 = "cemalaa";
	char const set = 'a';
	printf("%s",ft_strtrim(s1,set));

}
