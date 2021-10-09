#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"

int	main(void)
{
	char str0[] = "qwerty";
	char str1[] = "abcdef";
	char str2[] = "";
	char str3[] = "";
	char str4[] = "123";
	char str5[] = "QWERTY";
	char str6[] = {'\n', 'a'};
	char str7[] = "123qwerty";
	char str8[] = "";

	ft_strcpy(str2, str1);
	printf("%s\n", str2);
	printf("%s\n", str1);
	ft_strncpy(str3, str2, 3);
	printf("%s\n", str3);
	printf("%s\n", str2);
	printf("%d\n", ft_str_is_alpha(str0));
	printf("%d\n", ft_str_is_alpha(str4));
	printf("%d\n", ft_str_is_numeric(str0));
	printf("%d\n", ft_str_is_numeric(str4));
	printf("%d\n", ft_str_is_lowercase(str0));
	printf("%d\n", ft_str_is_lowercase(str5));
	printf("%d\n", ft_str_is_uppercase(str0));
	printf("%d\n", ft_str_is_uppercase(str5));
	printf("%d\n", ft_str_is_printable(str0));
	printf("%d\n", ft_str_is_printable(str6));
	ft_strcpy(str8, str7);
	printf("%s\n", str7);
	printf("%s\n", str8);
	return (0);
}
