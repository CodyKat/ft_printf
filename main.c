#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main()
{
	int a = 3;
	void *p_a = &a;
	printf("####################################\n");
	printf("printf\nft_printf\n순서입니다.");
	printf("\n####################################\n\n");
	
	printf("PART %%c\n");
	printf("%c\n", 'a');
	ft_printf("%c\n", 'a');
	printf("%c\n", INT_MAX);
	ft_printf("%c\n", INT_MAX);
	printf("\n///////////////////\n");
	printf("PART %%s\n");
	printf("%s\n", "THIS IS STRING");
	ft_printf("%s\n", "THIS IS STRING");	
	printf("%s\n", (void *)0);
	ft_printf("%s\n", (void *)0);
	printf("\n///////////////////\n");
	printf("PART %%p\n");
	printf("%p\n", p_a);
	ft_printf("%p\n", p_a);
	printf("%p\n", (void *)0);
	ft_printf("%p\n", (void *)0);
	printf("\n///////////////////\n");
	printf("PART %%d\n");
	printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MAX);
	printf("%d\n", UINT_MAX);
	ft_printf("%d\n", UINT_MAX);
	printf("\n///////////////////\n");
	printf("PART %%i\n");
	printf("%i\n", INT_MIN);
	ft_printf("%i\n", INT_MIN);
	printf("%i\n", -1);
	ft_printf("%i\n", -1);
	printf("\n///////////////////\n");
	printf("PART %%u\n");
	printf("%u\n", UINT_MAX);
	ft_printf("%u\n", UINT_MAX);
	printf("%u\n", -1);
	ft_printf("%u\n", -1);
	printf("\n///////////////////\n");
	printf("PART %%x\n");
	printf("%x\n", UINT_MAX);
	ft_printf("%x\n", UINT_MAX);	
	printf("%x\n", -1);
	ft_printf("%x\n", -1);
	printf("\n///////////////////\n");
	printf("PART %%X\n");
	printf("%X\n", UINT_MAX);
	ft_printf("%X\n", UINT_MAX);
	printf("%X\n", -1);
	ft_printf("%X\n", -1);
	printf("\n///////////////////\n");
	printf("PART %%\n");
	printf("%%\n");
	ft_printf("%%\n");
	printf("\n\n\n\n");
	printf("as%\n");
	ft_printf("as%");
}
