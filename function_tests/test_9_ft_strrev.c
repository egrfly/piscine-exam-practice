char    *ft_strrev(char *str);

#include <stdio.h>
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hi";
    
    printf("%s\n", ft_strrev(str1));
    printf("%s\n", str1);
    printf("%s\n", ft_strrev(str2));
    printf("%s\n", str2);
}
