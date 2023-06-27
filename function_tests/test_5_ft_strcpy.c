char    *ft_strcpy(char *s1, char *s2);

#include <stdio.h>
int main(void)
{
    char    buffer[10];
    char    *result;

    result = ft_strcpy(buffer, "What");
    printf("%s\n", buffer);
    printf("%s\n", result);
    printf("%d\n", buffer == result);
}
