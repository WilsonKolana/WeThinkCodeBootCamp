#include <stdio.h>

char *ft_strrev(char *str);
char *ft_strrev(char *str)
{	int i;
	i=0;	
	int charnum;
	char *str2;	
	while(str[i]!='\0')
	{
		charnum=i;
		i++;

	}

	int j;
	j=0;
	while(j<=charnum)
	{	str2[j]=str[charnum];
		j++;
		charnum--;
	}
	return str2;
}

int main()
{
	printf("%s",ft_strrev("Hello"));
	return 0;
}

