#include <unistd.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*str = "Hello";

	printf("The lenght is: %i", strlen(str));
}