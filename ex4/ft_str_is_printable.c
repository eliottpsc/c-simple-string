/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:04:38 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 13:12:26 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= ' ') && (*str <= '~'))
		{
			str++;
			continue ;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
char	arr[] = "ANTUHAhNO51\n62;..,yo-+";

printf("return = %d, %s", ft_str_is_printable(arr), arr);
}
*/
