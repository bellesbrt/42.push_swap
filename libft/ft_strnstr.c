/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:04:06 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/15 00:04:17 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		l;
	size_t		b;

	if (!*little)
		return ((char *)big);
	b = 0;
	while (b < len && big[b] != '\0')
	{
		if (big[b] == little[0])
		{
			l = 0;
			while (big[b + l] == little[l] && b + l < len)
			{
				if (little[l + 1] == '\0')
					return ((char *)&big[b]);
				l++;
			}
		}
		b++;
	}
	return (NULL);
}
