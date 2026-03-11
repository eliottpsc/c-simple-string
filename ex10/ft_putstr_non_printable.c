/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:37:02 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 19:30:02 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*start;
	char	*base;

	base = "0123456789abcdef";
	start = str;
	while (*str)
	{
		if ((*str < ' ') || (*str > '~'))
		{
			write(1, "\\", 1);
			write(1, &base[*str / 16], 1);
			write(1, &base[*str % 16], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
	str = start;
}
/*
int	main(void)
{
	char	arr[] = { 1, 2, 3, 4, 16, 17, 18, 30, 31, 32, 
	126, 127, 0, 65, 65, 65 };

	ft_putstr_non_printable(arr);
}
*/
