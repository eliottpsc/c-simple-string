/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:28:02 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/11 18:19:57 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lowcase(char c);
int	ft_upcase(char c);
int	ft_is_alpha(char c);
int	ft_is_alphanum(char c);

char	*ft_strcapitalize(char *str)
{
	int		in_word;
	char	*start;

	start = str;
	in_word = 0;
	while (*str != '\0')
	{
		if (!ft_is_alphanum(*str))
			in_word = 0;
		else
		{
			if (!in_word && ft_is_alpha(*str))
				*str = ft_upcase(*str);
			else if (ft_is_alpha(*str))
				*str = ft_lowcase(*str);
			in_word = 1;
		}
		str++;
	}
	str = start;
	return (str);
}

int	ft_upcase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	else
		return (c);
}

int	ft_lowcase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	else
		return (c);
}

int	ft_is_alpha(char c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}

int	ft_is_alphanum(char c)
{
	if (((c >= 'A') && (c <= 'Z'))
		|| ((c >= 'a') && (c <= 'z'))
		|| ((c >= '0') && (c <= '9')))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	arr[] = "onhi abu, ruc, ihte 4ou u6o5p .,p uotANTiot HEOha THU hote";

	printf("input = %s\n", arr);
	printf("output = %s\n", ft_strcapitalize(arr));

	char	tab[] = "hello, how are you doing? 42words forty-two; fifty+and+one";
	printf("input = %s\n", tab);
	printf("output = %s\n", ft_strcapitalize(tab));
}
*/
