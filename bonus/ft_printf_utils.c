/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemjeon <jaemjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:58:40 by jaemjeon          #+#    #+#             */
/*   Updated: 2022/04/04 17:58:44 by jaemjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_inset(char chr, char *set)
{
	while (*set != 0)
	{
		if (chr == *set)
			return (1);
		set++;
	}
	return (0);
}

int	nbr_len(int nbr)
{
	int	len = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
