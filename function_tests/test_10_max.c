int		max(int* tab, unsigned int len);

#include <stdio.h>
int main(void)
{
    int nbrs[] = {2, 7, 4, -9, 2, 34, 3, 41, 3, -16, 24, -5, 23};

    printf("%d\n", max(nbrs, 13));
}
