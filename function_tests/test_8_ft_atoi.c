int	ft_atoi(const char *str);

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", ft_atoi("-4"));
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", ft_atoi("5"));
    printf("%d\n", ft_atoi("2147483647"));
}
