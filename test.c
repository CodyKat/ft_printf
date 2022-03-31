#include <stdio.h>

int main()
{
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
/*
	printf("printf(\"%%03d\", 5) : %03d", 5);
	printf("\n");



	printf("printf(\"%%03d\", 5) : %03d", 5);
	printf("\n");


	printf("printf(\"%%03d\", 5) : %03d", 5);
	printf("\n");


	printf("printf(\"%%03d\", 5) : %03d", 5);
	printf("\n");


	printf("printf(\"%%03d\", 5) : %03d", 5);
	printf("\n");


	printf("printf(\"%%03d\", 5) : %03d", 5);
	printf("\n");


	printf("printf(\"%%03d\", 5) : %03d", 5);
	*/
	return 0;
}
