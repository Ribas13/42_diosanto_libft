#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int a)
{
	if ((a >= 0 && a <= 31) || (a == 127))
	{
		return (0);
	}
	else
	{
		return (a);
	}
}
/*
int	main(void)
{
	char	c;

	c = '.';
	printf("mine : %i\n", isprint(c));
}*/