/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:57:34 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/14 23:57:43 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static int	num_digits(long int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

static int	ft_is_negative(long int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char		*mem;
	int			i;
	int			digits;
	int			is_negative;
	long int	ln;

	ln = n;
	is_negative = ft_is_negative(ln);
	digits = num_digits(ln);
	i = 0;
	if (ln < 0)
		ln = -ln;
	mem = (char *)malloc((digits + 1 + is_negative) * sizeof(char));
	if (!mem)
		return (NULL);
	if (is_negative)
		mem[i++] = '-';
	while (digits)
	{
		mem[digits-- - 1 + is_negative] = (ln % 10) + 48;
		ln = ln / 10;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
