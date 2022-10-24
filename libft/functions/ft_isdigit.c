#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	int	a;

	a = 'z';
	printf("is digit: %i", isdigit(a));
}*/