#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_recursive_factorial(13));
	printf("%d\n", ft_recursive_factorial(12));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_iterative_power(2, 30));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(1, -1));
	printf("%d\n", ft_iterative_power(-2, 2));
	printf("%d\n", ft_recursive_power(2, 30));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1, -1));
	printf("%d\n", ft_recursive_power(-2, 2));
	printf("%d\n", ft_fibonacci(14));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(-1));
	return (0);
}
