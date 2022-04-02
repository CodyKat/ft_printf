#include <stdio.h>

int main()
{
	int a = 3;
	int* p_a = &a;
	printf("#################################################################\n");
	printf("####                       %%d 파트입니다!!                   ####\n");
	printf("#################################################################\n\n");

	printf("printf(\"%%.7d\", 12345) : |%.7d|", 12345);
	printf("\n");
	printf("printf(\"%%..7d\", 12345) : |%..7d|, (warning : invalid conversion)", 12345);
	printf("\n");
	printf("printf(\"%%07d\", 12345) : |%07d|", 12345);
	printf("\n");


	printf("printf(\"%% 07d\", 12345) : |% 07d|", 12345);
	printf("\n");
	printf("printf(\"%%-7d\", 12345) : |%-7d|", 12345);
	printf("\n");
	printf("printf(\"%%-07d\", 12345) : |%-07d|, (warning : flag '0' is ignored when flag '-' is present)", 12345);
	printf("\n");
	printf("printf(\"%%+07d\", 12345) : |%+07d|", 12345);
	printf("\n");
	printf("printf(\"%%+-07d\", 12345) : |%+-07d|, (warning : flag '0' is ignored when flag '-' is present)", 12345);
	printf("\n");


	printf("printf(\"%%.07d\", 12345) : |%.07d|", 12345);
	printf("\n");
	printf("printf(\"%%-.7d\", 12345) : |%-.7d|", 12345);
	printf("\n");
	printf("printf(\"%%+.7d\", 12345) : |%+.7d|", 12345);
	printf("\n");
	printf("printf(\"%%+-.7d\", 12345) : |%+-.7d|", 12345);
	printf("\n");
	printf("printf(\"%% +-.7d\", 12345) : |% +-.7d|, (warning : flag ' ' is ignored when flag '+' is present)", 12345);
	printf("\n");


	printf("printf(\"%%00007d\", 12345) : |%00007d|", 12345);
	printf("\n");
	printf("printf(\"%%-d\", 12345) : |%-d|", 12345);
	printf("\n");
	printf("printf(\"%%----d\", 12345) : |%----d|", 12345);
	printf("\n");
	printf("printf(\"%%-7d\", 12345) : |%-7d|", 12345);
	printf("\n");
	printf("printf(\"%%----7d\", 12345) : |%----7d|", 12345);
	printf("\n");

	printf("printf(\"%% 7d\", 12345) : |% 7d|", 12345);
	printf("\n");
	printf("printf(\"%%   7d\", 12345) : |%   7d|", 12345);
	printf("\n");
	printf("printf(\"%% -7d\", 12345) : |% -7d|", 12345);
	printf("\n");
	printf("printf(\"%% 07d\", 12345) : |% 07d|", 12345);
	printf("\n");

	printf("printf(\"%%-07d\", 12345) : |%-07d|, (warning : flag '0' is ignored when flag '-' is present)", 12345);
	printf("\n");
	printf("\n");


	printf("printf(\"%%07d\", 12345) : |%07d|", 12345);
	printf("\n");
	printf("printf(\"%%00007d\", 12345) : |%00007d|", 12345);
	printf("\n");
	printf("printf(\"%%+d\", 12345) : |%+d|", 12345);
	printf("\n");
	printf("printf(\"%%++++d\", 12345) : |%++++d|", 12345);
	printf("\n");
	printf("printf(\"%%+7d\", 12345) : |%+7d|", 12345);
	printf("\n");
	printf("printf(\"%%    +7d\", 12345) : |%    +7d|, (warngin : flag ' ' is ignored when flag '+' is present)", 12345);
	printf("\n");
	printf("printf(\"%%++++7d\", 12345) : |%++++7d|", 12345);
	printf("\n");
	printf("printf(\"%%+-7d\", 12345) : |%+-7d|", 12345);
	printf("\n");
	printf("printf(\"%% +-7d\", 12345) : |% +-7d|, (warning : flag ' ' is ignored when flag '+' is present)", 12345);
	printf("\n");
	printf("printf(\"%% -+7d\", 12345) : |% -+7d|, (warning : flag ' ' is ignored when flag '+' is present)", 12345);
	printf("\n");
	printf("printf(\"%%+07d\", 12345) : |%+07d|", 12345);


	printf("\n");
	printf("\n");
	printf("\n");


	printf("printf(\"%%.3d\", 12345) : |%.3d|", 12345);
	printf("\n");
	printf("printf(\"%%..3d\", 12345) : |%..3d|, (warning : invalid conversion)", 12345);
	printf("\n");
	printf("printf(\"%%03d\", 12345) : |%03d|", 12345);
	printf("\n");
	printf("printf(\"%%00003d\", 12345) : |%00003d|", 12345);
	printf("\n");
	printf("printf(\"%%-d\", 12345) : |%-d|", 12345);
	printf("\n");
	printf("printf(\"%%----d\", 12345) : |%----d|", 12345);
	printf("\n");
	printf("printf(\"%%-3d\", 12345) : |%-3d|", 12345);
	printf("\n");
	printf("printf(\"%%----3d\", 12345) : |%----3d|", 12345);
	printf("\n");

	printf("printf(\"%% 3d\", 12345) : |% 3d|", 12345);
	printf("\n");
	printf("printf(\"%%   3d\", 12345) : |%   3d|", 12345);
	printf("\n");
	printf("printf(\"%% -3d\", 12345) : |% -3d|", 12345);
	printf("\n");
	printf("printf(\"%%+-3d\", 12345) : |%+-3d|", 12345);
	printf("\n");
	printf("printf(\"%% +-3d\", 12345) : |% +-3d|, (warning : flag ' ' is ignored when flag '+' is present)", 12345);
	printf("\n");
	printf("printf(\"%% -+3d\", 12345) : |% -+3d|, (warning : flag ' ' is ignored when flag '+' is present)", 12345);
	printf("\n");
	printf("printf(\"%% 03d\", 12345) : |% 03d|", 12345);
	printf("\n");
	printf("printf(\"%%-03d\", 12345) : |%-03d|, (warning) : flag '0' is ignored when flag '-' is present", 12345);
	printf("\n");
	printf("\n");
	printf("\n");


	printf("printf(\"%%03d\", 12345) : |%03d|", 12345);
	printf("\n");
	printf("printf(\"%%00003d\", 12345) : |%00003d|", 12345);
	printf("\n");
	printf("printf(\"%%+d\", 12345) : |%+d|", 12345);
	printf("\n");
	printf("printf(\"%%++++d\", 12345) : |%++++d|", 12345);
	printf("\n");
	printf("printf(\"%%+3d\", 12345) : |%+3d|", 12345);
	printf("\n");
	printf("printf(\"%%    +3d\", 12345) : |%    +3d|, (warning) : flag ' ' is ignored when flag '+' is present", 12345);
	printf("\n");
	printf("printf(\"%%++++3d\", 12345) : |%++++3d|", 12345);
	printf("\n");
	printf("printf(\"%%+03d\", 12345) : |%+03d|", 12345);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("#################################################################\n");
	printf("####                       %%s 파트입니다!!                   ####\n");
	printf("#################################################################\n\n");


	printf("printf(\"%%-s\", \"abcd\") : |%-s|", "abcd");
	printf("\n");
	printf("printf(\"%%7s\", \"abcd\") : |%7s|", "abcd");
	printf("\n");
	printf("printf(\"%% 7s\", \"abcd\") : |% 7s| (warning : flag ' ' is undefined behave)", "abcd");
	printf("\n");
	printf("printf(\"%%-7s\", \"abcd\") : |%-7s|", "abcd");
	printf("\n");
	printf("printf(\"%%.s\", \"abcd\") : |%.s|", "abcd");
	printf("\n");
	printf("printf(\"%%2.s\", \"abcd\") : |%2.s|", "abcd");
	printf("\n");
	printf("printf(\"%%7.s\", \"abcd\") : |%7.s|", "abcd");
	printf("\n");
	printf("printf(\"%%2.5s\", \"abcd\") : |%2.5s|", "abcd");
	printf("\n");
	printf("printf(\"%%7.5s\", \"abcd\") : |%7.5s|", "abcd");
	printf("\n");
	printf("printf(\"%%7.7s\", \"abcd\") : |%7.7s|", "abcd");
	printf("\n");
	printf("printf(\"%%7.2s\", \"abcd\") : |%7.2s|", "abcd");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("#################################################################\n");
	printf("####                       %%p 파트입니다!!                   ####\n");
	printf("#################################################################\n\n");
	printf("printf(\"%%p\", 12345) : |%p|", p_a);
	printf("\n");
	printf("printf(\"%%+p\", 12345) : |%+p|, (warning : flag '+' is not defined)", p_a);
	printf("\n");
	printf("printf(\"%%-p\", 12345) : |%-p|", p_a);
	printf("\n");
	printf("printf(\"%%20.p\", 12345) : |%20.p|", p_a);
	printf("\n");
	printf("printf(\"%%-20.p\", 12345) : |%-20.p|", p_a);
	printf("\n");
	printf("printf(\"%%.20p\", 12345) : |%.20p|, (warning : precision is not defined)", p_a);
	printf("\n");
	printf("printf(\"%%20.20p\", 12345) : |%20.20p|, (warning : precision is not defined)", p_a);
	printf("\n");
	printf("printf(\"%%20p\", 12345) : |%20p|", p_a);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("#################################################################\n");
	printf("####                       %%x 파트입니다!!                   ####\n");
	printf("#################################################################\n\n");
	printf("printf(\"%%-x\", 12345) : |%-x|,", 12345);
	printf("\n");
	printf("printf(\"%% x\", 12345) : |% x|, (warning : flag ' ' is not defined)", 12345);
	printf("\n");
	printf("printf(\"%%+x\", 12345) : |%+x|, (warning : flag '+' is not defined)", 12345);
	printf("\n");
	printf("printf(\"%%#x\", 12345) : |%#x|, ", 12345);
	printf("\n");
	printf("printf(\"%%7x\", 12345) : |%7x|, ", 12345);
	printf("\n");
	printf("printf(\"%%7.x\", 12345) : |%7.x|, ", 12345);
	printf("\n");
	printf("printf(\"%%7.2x\", 12345) : |%7.2x|, ", 12345);
	printf("\n");
	printf("printf(\"%%2.7x\", 12345) : |%2.7x|, ", 12345);
	printf("\n");
	printf("printf(\"%%7.7x\", 12345) : |%7.7x|, ", 12345);
	printf("\n");


	printf("printf(\"%%#7x\", 12345) : |%#7x|, ", 12345);
	printf("\n");
	printf("printf(\"%%#7.x\", 12345) : |%#7.x|, ", 12345);
	printf("\n");
	printf("printf(\"%%#7.2x\", 12345) : |%#7.2x|, ", 12345);
	printf("\n");
	printf("printf(\"%%#2.7x\", 12345) : |%#2.7x|, ", 12345);
	printf("\n");
	printf("printf(\"%%#7.7x\", 12345) : |%#7.7x|, ", 12345);
	printf("\n");


	printf("printf(\"%%-7x\", 12345) : |%-7x|, ", 12345);
	printf("\n");
	printf("printf(\"%%-7.x\", 12345) : |%-7.x|, ", 12345);
	printf("\n");
	printf("printf(\"%%-7.2x\", 12345) : |%-7.2x|, ", 12345);
	printf("\n");
	printf("printf(\"%%-2.7x\", 12345) : |%-2.7x|, ", 12345);
	printf("\n");
	printf("printf(\"%%-7.7x\", 12345) : |%-7.7x|, ", 12345);
	printf("\n");


	printf("printf(\"%%-2x\", 12345) : |%-2x|, ", 12345);
	printf("\n");
	printf("printf(\"%%-2.2x\", 12345) : |%-2.2x|, ", 12345);
	printf("\n");
	return 0;
}
