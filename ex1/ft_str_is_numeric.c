/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:17:30 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 11:22:36 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= '0') && (*str <= '9'))
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
	char	arr[10] = "46541321.";

	printf("return = %d, %s", ft_str_is_numeric(arr), arr);
}
*/
