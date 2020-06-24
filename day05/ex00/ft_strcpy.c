#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    int a;

    a = 0;
    while (src[a] != '\0')
    {
        dest[a] = src[a];
        a++;
        
       
    }
    dest[a] = '\0';
    return dest;
    
}
int main()
{
    char src[11] = "helloworld";
    char dest[11];
    
    ft_strcpy(dest, src);
    printf("%s\n", dest);
    return 0;
}
