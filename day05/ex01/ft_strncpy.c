#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n) 
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int   main(void)
{
  char test1[256] = "abcdef";
  char test2[256] = "how";
  
  printf("%s\n", ft_strncpy(test1, "shukri", 6));
  printf("%s\n", ft_strncpy(test1, "i", 1));
  printf("%s\n", ft_strncpy(test1, "knot", 3));
  printf("%s\n", ft_strncpy(test2, "the", 1));
  return (0);
}