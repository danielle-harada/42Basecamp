#include<stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src;
	char dest[10];
	char *dest2;
	
	src = "danielle";
	dest2 = "harada";

	printf("src: %s | dest: %s | dest2: %s\n", src, dest, dest2);
	dest2 = ft_strcpy(dest, src);
	src = "teixeira";
	printf("src: %s | dest: %s | dest2: %s\n", src, dest, dest2);
}