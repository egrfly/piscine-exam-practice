int	    is_power_of_2(unsigned int n);

#include <stdio.h>
int main(void)
{
    printf("%d\n", is_power_of_2(1));
    printf("%d\n", is_power_of_2(2));
    printf("%d\n", is_power_of_2(3));
    printf("%d\n", is_power_of_2(4));
    printf("%d\n", is_power_of_2(8));
    printf("%d\n", is_power_of_2(16));
    printf("%d\n", is_power_of_2(2147483648));
    printf("%d\n", is_power_of_2(4294967295));
}
