#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)i

	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int   main(void)
{
  char test1[256] = "asdf";
  
  printf("%s\n", ft_strncpy(test1, "kkkj", 2));
  printf("%s\n", strncpy(test1, "jkioo", 5));
return 0;
}
 
