#include <unistd.h>
#include <string.h>
#include <stdio.h>
//#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest || !src)
	{
		return (NULL);
	}
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[100] = "Hello";

	ft_memmove(src + 4, src, 5);
	printf("%s", src);
	return (0);
}*/