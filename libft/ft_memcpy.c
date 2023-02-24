/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:56:33 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/14 23:56:41 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	const char	*char_src;
	char		*char_dest;
	size_t		i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	char_src = (const char *)src;
	char_dest = (char *)dest;
	while (i < len)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
