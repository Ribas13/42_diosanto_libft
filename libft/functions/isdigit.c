#include <unistd.h>

int	isdigit(int a)
{
	char	c;

	c = a;
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

int	main(void)
{
	int	a;

	a = '5';

}