/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:27:49 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 18:35:33 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		len;
	char	*start;

	start = str;
	len = 0;
	while (*str++)
		len++;
	str = start;
	write(1, str, len);
}
/*
int	main(void)
{
	char	*arr = "\nabcde1234\n";

	ft_putstr(arr);
}
*/
