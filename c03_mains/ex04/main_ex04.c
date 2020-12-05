#include<stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char *str;
	char *dest;
	char *to_find;
		
	str = "A danielle huhu";
	to_find = "n";
		
	dest = ft_strstr(str, to_find);
	printf("%s\n", dest);

}