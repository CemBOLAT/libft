
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int	i;

	i = 0;
	//printf("%d\n",i);
	res = (char *)malloc(sizeof(char) * 12);
	if (!res)
		return (NULL);
	if (n == -2147483648)
		res = "-2147483648\0";
	else if(n < 0)
	{
		n = -n;
		//printf("%d\n",i);
		res[i++] = '-';
		//printf("%d\n",i);
		ft_itoa(n);
	}
	else if(n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else if (n <= 9)
		res[i++] = n + '0';
	if (n != -2147483648)
		res[i] = '\0';
	//printf("%s",res);
	return (res);
}

int	main()
{
	int s = -214748364;
	ft_itoa(s);
}
