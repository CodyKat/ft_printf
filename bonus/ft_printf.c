/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:04:40 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/04/03 17:40:43 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LEFT_SORT 1
#define FILL_ZERO 2
#define PRECISION 4
#define SHOW_BASE 8
#define START_SPACE 16
#define SHOW_SIGN 32
#define TYPE_C 64
#define TYPE_S 128
#define TYPE_P 256
#define TYPE_D 512
#define TYPE_I 1024
#define TYPE_U 2048
#define TYPE_LOWER_X 4096
#define TYPE_UPPER_X 8192
#define TYPE_PERSENT 16384

int	ft_write_char(char **chr)
{
	write(1, *chr, 1);
	*chr++;
	return (1);
}

void	setting_width_precision(char **format, int *width, int *precision)
{
	if (*(*format - 1) != '.')
	{
		*width = ft_atoi(*format);
		(*foramt) += nbr_len(*width) - 1;
	}
	else
	{
		*precision = ft_atoi(*format);
		(*format) += nbr_len(*precision) - 1;
	}
}

void	set_type(unsigned int *flag, char **format)
{
	if (**format == 'c')
		flag = flag | TYPE_C;
	if (**format == 's')
		flag = flag | TYPE_S;
	if (**format == 'p')
		flag = flag | TYPE_P;
	if (**format == 'd')
		flag = flag | TYPE_D;
	if (**format == 'i')
		flag = flag | TYPE_I;
	if (**format == 'u')
		flag = flag | TYPE_U;
	if (**format == 'x')
		flag = flag | TYPE_LOWER_X;
	if (**format == 'X')
		flag = flag | TYPE_UPPER_X;
	else
		flag = flag | TYPE_PERSENT;
}

void	set_flag(unsigned int *flag, char **format, int *width, int *precision)
{
	while (is_inset(**format, "cspdiuxX%") == 0)
	{
		if (**format == '-')
			flag = flag | LEFT_SORT;
		else if (**format == '0')
			flag = flag | FILL_ZERO;
		else if (**format == '.')
			flag = flag | PRECISION;
		else if (**format == '#')
			flag = flag | SHOW_BASE;
		else if (**format == ' ')
			flag = flag | START_SPACE;
		else if (**format == '+')
			flag = flag | SHOW_SIGN;
		else if (ft_isdigit(**format))
			setting_width_precision(format, width, precision);
		(*format)++;
	}
	set_type(flag, format);	
}

char	*make_line(va_list ap, unsigned int flag, int width, int precision)
{
	if (flag & TYPE_C)
		return (make_char(ap, flag, width, precision));
	if (flag & TYPE_S)
		return (make_string(ap, flag, width, precision));
	if (flag & TYPE_P)
		return (make_pointer(ap, flag, width, precision));
	if ((flag & TYPE_I) || (flag & TYPE_D))
		return (make_int(ap, flag, width, precision));
	if ((flag & TYPE_U) || (flag & TYPE_LOWER_X) || (flag & TYPE_UPPER_X))
		return (make_ui_base(ap, flag, width, precision));
	if (flag & TYPE_PERSENT)
		return ("%");
}

int	ft_print_args(va_list ap, char **format)
{
	unsigned int	flag;
	char			*print_line;
	int				width;
	int				precision;

	set_flag(&flag, format, &width, &precision);
	print_line = make_line(ap, flag, width, precision);
}

int ft_printf(const char *format)
{
	va_list		ap;
	int			print_len;
	const char	*format_cursor;

	print_len = 0;
	va_start(ap, format);
	while (*format != 0)
	{
		if (*format == '%')
		{
			print_len += ft_print_args(ap, &format);
			continue;
		}
		print_len += ft_write_char(&format);
	}
}
