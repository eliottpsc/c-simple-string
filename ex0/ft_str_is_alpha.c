/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:36:15 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 11:16:38 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (((*str >= 'A') && (*str <= 'Z'))
			|| ((*str >= 'a') && (*str <= 'z')))
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
	char	arr[10] = "azAZhirc\0";
	//char	;
	
	printf("return = %d, %s", ft_str_is_alpha(arr), arr);
}
*/
