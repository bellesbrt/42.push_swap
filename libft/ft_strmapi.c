/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:05:09 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/15 00:05:17 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str_func;
	size_t	i;

	str_func = NULL;
	if (!s)
		return (str_func);
	str_func = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str_func)
		return (str_func);
	i = 0;
	while (s[i] != '\0')
	{
		str_func[i] = f(i, s[i]);
		i++;
	}
	str_func[i] = '\0';
	return (str_func);
}
