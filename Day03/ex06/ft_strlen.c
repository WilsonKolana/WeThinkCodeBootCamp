#include <stdio.h>

int ft_strlen(char *str);

int ft_strlen(char *str)
{
	int charnum;
	int i;
	i=0;

	while(str[i]!='\0')
	{	
		charnum=i;
		i++;
	}
	return charnum;
}

int main()
{	int chars;
	chars=ft_strlen("Hello  ,");
	printf("There are %d characters.", chars);
	return 0;
}
