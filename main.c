#include "ft_printf.h"

int main(void)
{
	write(1, "i: ", 3);
	int i = ft_puthexnumbers(2, 'x');
	write(1, "\n", 1);
	printf("p: %x\n", 2);
	// int i = 10;
	// unsigned int n = 5;
	// while (i--)
	// 	printf("%u\n", n--);
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
// 	}s
// 	if (n == 0)
// 	{
// 		write(1, "0", 1);
// 		i++;
// 	}
// 	return (i);
// }