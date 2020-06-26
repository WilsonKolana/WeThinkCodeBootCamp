#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
	

	int i=0;
	while(*src != '\0')
	{
		dest=(char *)malloc(sizeof(char)*i);
		dest[i]=src[i];
		i++;
	

	}
	//dest[i]='\0';
	 return dest;
	 free(dest);

}

int main()
{  
        char s[]="Hi";
	char r[]="wilson";
	printf("%s", ft_strcpy(s, r));
	return 0;

}



