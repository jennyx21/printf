#include "ft_printf.h"

int main(void)
{
	int i = ft_putnumbers(-12345, 'i');
	printf("\n%i\n", i);
}
// {
// 	int		i;
// 	char	digit;

// 	i = 0;
// 	while (n > 0)
// 	{
// 		digit = n % 10 + '0';
// 		write(1, &digit, 1);
// 		n = n / 10;
// 		i++;
// 	}
// 	if (n == 0)
// 	{
// 		write(1, "0", 1);
// 		i++;
// 	}
// 	return (i);
// }