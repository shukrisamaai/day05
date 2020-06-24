#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int a;

  a = 0;
  while (s1[a] == s2[a])
  {
    if (s1[a] == '\0' || a > n)
      return (0);
    a++;
  }
  return ((int)s1[a] - (int)s2[a]);
}

int main(void) {
  char s1[] = "coucou";
  char s2[] = "coucou ";
  printf("%d\n", ft_strncmp(s1, s2, 10));
  return 0;
}