
#include <stdio.h>

int ft_fibonacci(int index);

int ft_fibonacci(int index)
{
	int result;

	if(index==0)
	{
		result=1;
	}
	else if(index<=2)
	{
		result=index;
	}
	else 
	{
		result=ft_fibonacci(index-1) + ft_fibonacci(index-2);
	}
	return result;
}


int main()
{
	int a;
	a=ft_fibonacci(5);
	printf("%d", a);
	return 0;
}
