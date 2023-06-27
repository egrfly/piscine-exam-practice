int    ft_strcmp(char *s1, char *s2);

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_strcmp("abc", "def") < 0);
    printf("%d\n", ft_strcmp("def", "abc") > 0);
    printf("%d\n", ft_strcmp("abc", "abd") < 0);
    printf("%d\n", ft_strcmp("abc", "abc") == 0);
}
