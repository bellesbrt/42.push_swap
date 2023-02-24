/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:08:42 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/15 00:08:43 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	int		len;

	len = ft_strlen(s);
	sdup = malloc(1 + len * sizeof(char));
	if (!sdup)
		return (sdup);
	ft_memcpy(sdup, s, len);
	sdup[len] = '\0';
	return ((char *)sdup);
}
