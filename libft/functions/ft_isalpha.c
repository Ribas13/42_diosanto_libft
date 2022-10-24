#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
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

    a = '0';
    printf("is alpha?: %i", isalpha(a));
}*/