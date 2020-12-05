#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *s1;
	char *s2;
	unsigned int n;

	s1 = "daniElle";
	s2 = "dani";
	n = 4;
	printf("%d\n", ft_strncmp(s1, s2, n));
}