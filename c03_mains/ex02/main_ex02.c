#include<stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char *src;
	char dest[100]="";
	char *dest2;
	
	src = "danielle";
	dest2 = "";
	
	dest2 = ft_strcat(dest, src);
	//printf("palavra: %s | concatenada: %s\n", src, dest2);

	src = "teixeira"; //nova palavra
	dest2 = ft_strcat(dest, src); //concatena
	//printf("nova palavra: %s | concatenada: %s\n", src, dest2);

	src = "harada";
	dest2 = ft_strcat(dest, src);
	printf("nova palavra: %s | concatenada: %s\n", src, dest2);
}