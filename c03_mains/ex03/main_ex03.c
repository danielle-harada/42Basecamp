#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char *src;
	char dest[100]="";
	char *dest2;
	unsigned int nb;
	
	src = "danielle";
	dest2 = "";
	nb = 5;
	
	dest2 = ft_strncat(dest, src, nb);
	printf("palavra: %s | concatenada: %s\n", src, dest2);

	src = "teixeira"; //nova palavra
	dest2 = ft_strncat(dest, src, nb); //concatena
	printf("nova palavra: %s | concatenada: %s\n", src, dest2);

	src = "harada";
	dest2 = ft_strncat(dest, src, nb);
	printf("nova palavra: %s | concatenada: %s\n", src, dest2);
}