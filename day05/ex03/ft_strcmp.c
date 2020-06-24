#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int a;
	a = 0;

	while (s1[a])
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (s1[a] - s2[a]);

}

int main()
{
 char str[] = "B";
 char to_find[] = "A";
 
 printf("%d\n", ft_strcmp(str, to_find));
 
 return(0);
}
