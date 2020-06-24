#include <stdio.h>



char	*ft_strupcase(char *str)
{
	int z;

	z = 0;
	while (str[z] != '\0')
	{
		if (str[z] >= 'a' && str[z] <= 'z')
		{
		  	    printf("The char is %c.\n", str[z]);

			str[z] -= 32;
		}
		z++;
	}
	return (str);
}
