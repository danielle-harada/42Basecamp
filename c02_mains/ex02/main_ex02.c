#include<stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char *str;
	
	str = "dani";
		
	printf("%d\n", ft_str_is_alpha(str));
}