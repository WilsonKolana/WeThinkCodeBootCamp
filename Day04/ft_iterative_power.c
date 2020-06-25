#include <stdio.h>

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power)
{	
	int i;
	i=0;
	int result=1;
	while(i<power)
	{
		if(power==0)
		{
			result=0;

		}
		else if(power<0)
		{
			result=1/(nb*result);
		}
		else			
		{ 
			result=nb*result;
		}
	i++;
	}
	return result;
}

int main()
{
	int a;
	a=ft_iterative_power(5,5);
	printf("%d",a);
	return 0;
}

