#include<stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char *str;
	
	str = "Dani";
		
	printf("%d\n", ft_str_is_lowercase(str));
}