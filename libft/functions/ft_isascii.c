#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char	c;

	c = 127;
	printf("Is ascii: %i", isascii(c));
}*/