/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:21:00 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 18:26:54 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	arr[15] = "12abc\n\0uon";

	printf("%d\n", ft_strlen(arr));
}
*/
