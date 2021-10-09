#include <stdio.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"

int	main(void)
{
	char str0[] = "abcdef";
	char str1[] = "abddef";
	char str2[] = "abcdef";

	printf("%d\n", ft_strcmp(str0, str1));
	printf("%d\n", ft_strcmp(str0, str2));
	printf("%d\n", ft_strcmp(str1, str0));
	printf("%d\n", ft_strncmp(str0, str1, 3));
	printf("%d\n", ft_strncmp(str0, str2, 3));
	printf("%d\n", ft_strncmp(str1, str0, 3));
	printf("%s\n", ft_strcat(str0, str2));
	printf("%s\n", ft_strncat(str0, str1, 3));
	return (0);
}

/*
 	-1
	0
	1
	-1
	0
	1
	abcdefabcdef
	abcdefabcdefabd
*/
