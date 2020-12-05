#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char *src;
	char dest[10];
	char *dest2;
	unsigned int n;
	
	n=4;
	src = "danielle";
	dest2 = "harada";

	printf("src: %s | dest: %s | dest2: %s\n", src, dest, dest2);
	dest2 = ft_strncpy(dest, src, n);
	
	printf("src: %s | dest: %s | dest2: %s\n", src, dest, dest2);
}