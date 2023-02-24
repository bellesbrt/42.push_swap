/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:54:43 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/14 23:54:52 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_calloc(size_t n_elem, size_t size)
{
	void					*arr;
	long long unsigned int	result;

	arr = NULL;
	result = n_elem * size;
	if (n_elem != 0 && result / n_elem != size)
		return (arr);
	arr = malloc(result);
	if (!arr)
		return (NULL);
	ft_bzero(arr, result);
	return (arr);
}
