char    *ft_strdup(char *src);

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char    *dup;

    dup = ft_strdup("Hello there");
    printf("%s\n", dup);
    free(dup);
    dup = ft_strdup("");
    printf("%s\n", dup);
    free(dup);
}
