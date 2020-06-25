#include <stdio.h>

int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
	int i = 1;
	int sqr = 1;
	if(nb == 0)
	{
		return 0;
	}
	while(sqr < nb)
	{ 
		i++;
		sqr=i * i;
	}
		
	if(sqr == nb)
	{
		return i;
	}
	else
	{
		return 0;
	}
		
	
}

int main()
{
	int a;
	a = ft_sqrt(25);
	printf("%d",a);
	return 0;
}



