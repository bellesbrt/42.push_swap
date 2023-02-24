/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:56:14 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/14 23:56:25 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_src;
	char	*char_dest;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	char_src = (char *)src;
	char_dest = (char *)dest;
	if (char_dest > char_src)
	{
		while (n-- > 0)
			char_dest[n] = char_src[n];
	}
	else
	{
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	return (dest);
}
