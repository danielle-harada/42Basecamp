#include<stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a;
	int b;
	int *ptr_a;
	int *ptr_b;

	a=15;
	b=10;
	ptr_a=&a;
	ptr_b=&b;
	

	ft_swap(ptr_a,ptr_b);

}