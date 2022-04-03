/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:00:29 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/04/03 17:40:42 by jaemjeon         ###   ########.fr       */
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

char	*make_char(va_list ap, unsigned int flag, int width, int precision)
{
	char	chr;

	chr = va_arg(ap, int);
	
}
char	*make_string(va_list ap, unsigned int flag, int width, int precision)
{
}
char	*make_pointer(va_list ap, unsigned int flag, int width, int precision)
{
}
char	*make_int(va_list ap, unsigned int flag, int width, int precision)
{
}
char	*make_ui_base(va_list ap, unsigned int flag, int width, int precision)
{
}
