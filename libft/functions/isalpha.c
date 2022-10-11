#include <unistd.h>
#include <stdio.h>

int	isalpha(int a)
{
	char	c;

	c = a;
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (2);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
    int a;

    a = 'p';
    printf("is alpha?: %i", isalpha(a));
}*/