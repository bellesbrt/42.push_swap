/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:57:05 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/14 23:57:28 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*elem;

	elem = (char *)s;
	while (n-- > 0)
	{
		if (*elem == (char)c)
			return ((void *)elem);
		elem++;
	}
	return (0);
}
