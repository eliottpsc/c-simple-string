/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:13:12 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 13:25:33 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if ((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
			str++;
		}
		else
			str++;
	}
	return (start);
}
/*
#include <stdio.h>
int	main(void)
{
	char	arr[] = "aAzZNTU15HAhNO51\n62;..,yo-+";
	printf("input = %s\n", arr);
	printf("output = %s\n", ft_strupcase(arr));
}
*/
