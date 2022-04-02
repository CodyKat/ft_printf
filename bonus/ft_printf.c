/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:04:40 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/04/02 11:18:18 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LEFT_SORT 32
#define FILL_ZERO 16
#define PRECISION 8
#define SHOW_BASE 4
#define START_SPACE 2
#define SHOW_SIGN 1

int	ft_write_char(char **chr)
{
	write(1, *chr, 1);
	*chr++;
	return (1);
}

void	setting_width_precision(char **format, int *width, int *precision)
{
	if (*((*format) - 1) != '.')
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

void	set_flag(unsigned char *flag, char **format, int *width, int *precision)
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
}

int	ft_print_args(va_list ap, char **format)
{
	unsigned char	flag;
	int				width;
	int				precision;
	int				print_len;

	set_flag(&flag, format, &width, &precision);
	print_len = 0;
	cal_print_len(flag, *((*format) + 1))
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
