#include <stdio.h>

int ft_recursive_factorial(int nb);


int	ft_recursive_factorial(int nb)
{	
	int factorial;

	if(nb == 0 || nb == 1)
	{
		factorial=1;
	}
	else if(nb < 0)
	{

		factorial=0;
	}
	else
	{

		factorial = nb*ft_recursive_factorial(nb -1);
	}
	
	return factorial;
}

int main()
{	int a;
	a=ft_recursive_factorial(1);
	printf("Factorial is %d",a);

}
