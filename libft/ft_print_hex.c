/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:01:40 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/15 00:01:51 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	hex_length(unsigned long int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

char	*hex_to_string(unsigned long int number, char *base)
{
	char	*hex;
	int		len;

	len = hex_length(number);
	hex = (char *)malloc(sizeof(char) * (len + 1));
	if (!hex)
		return (0);
	hex[len] = '\0';
	while (len > 0)
	{
		hex[len - 1] = base[number % 16];
		number = number / 16;
		len--;
	}
	return (hex);
}

int	ft_print_hex(unsigned int nbr, char *base)
{
	char	*str;
	int		len;

	str = hex_to_string(nbr, base);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
