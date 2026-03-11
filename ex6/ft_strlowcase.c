/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:23:54 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 13:26:48 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
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
	printf("output = %s\n", ft_strlowcase(arr));
}
*/
