#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
	*p = c;
	p++;
	n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	*str;

	str = strdup("hello111111111");
	ft_memset(str, 'a', 14);
	printf("%s\n", str);
}*/