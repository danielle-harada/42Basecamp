#include<stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char *str;
	
	str = "DANI";
		
	printf("%d\n", ft_str_is_uppercase(str));
}