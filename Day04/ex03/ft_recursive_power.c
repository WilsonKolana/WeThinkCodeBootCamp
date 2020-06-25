#include <stdio.h>

int ft_recursive_power(int nb, int power)
{	
	int result;
	if(power==0)
	{
		result=1;
	}
	
	else if(power<0)
	{
		result=0;
	}
	else
	{
		result=nb*ft_recursive_power(nb, power-1);
	}
	return result;
}

int main()
{
	int a;
	a=ft_recursive_power(2, -3);
	printf("%d", a);
	return 0;
}
