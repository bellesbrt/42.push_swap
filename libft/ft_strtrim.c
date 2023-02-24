/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:02:51 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/17 00:57:45 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && (ft_strchr(set, s1[i])))
		i++;
	while (len && ft_strchr(set, s1[len]))
		len--;
	if ((int)(len - i + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, i, (len - i + 1)));
}
