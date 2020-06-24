#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void    ft_putnbr(int nb)
{
    if (nb > 21474836 || nb < -2147483648)
        return ;
    if (nb < 0)
    {
        nb = nb * -1;
        ft_putchar('-');
    }
    if (nb < 10)
    {
        ft_putchar(nb + 48);
        return ;
    }
    ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + 48);
    return ;
}

char    *ft_strstr(char *str, char *to_find) 
{
  int i = 0;
  int j = 0;
  if (to_find[0] == '\0')
    return str;
  while (str[i] != '\0')
  {
    j = 0;
      while (str[i + j] == to_find[j])
      {
        if (to_find[j] == '\0')
          return (str+i);
        j++;
      }
    i++;
  }
  return 0;
}
