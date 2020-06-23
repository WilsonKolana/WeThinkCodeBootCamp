#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
	
	*a=(*a)/(*b);
	*b=(*a) % (*b);
}

int main()
{
	int a;
	int b;
	a=10;
       	b=5;
	ft_ultimate_div_mod(&a,&b);
	printf("devision: %d, mod: %d",a,b);
	return 0;	
}
