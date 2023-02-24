/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:03:53 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/15 00:04:01 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = (char *)s + len;
	while (ptr != s)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
