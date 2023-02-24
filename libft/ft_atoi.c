/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:37:04 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/14 23:53:58 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	result;

	result = 0;
	sign = 1;
	while (((*str >= '\t' && *str <= '\r') || *str == ' ') && *str != '\0')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1 * sign;
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str - 48);
		str++;
	}
	return (sign * result);
}
