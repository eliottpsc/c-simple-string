/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:23:55 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 11:46:27 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'a') && (*str <= 'z'))
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
char	arr[10] = "aoehuan";

printf("return = %d, %s", ft_str_is_lowercase(arr), arr);
}
*/
