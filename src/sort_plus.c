/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_plus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:24:30 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/17 00:39:49 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_plus(int max, int num, int max_bits, t_vars *vars)
{
	int	j;
	int	i;

	max = get_max_value(vars->stack_a.nums, vars->len_a);
	while ((max >> max_bits) != 0)
		++max_bits;
	i = 0;
	while (i < max_bits)
	{
		j = -1;
		while (++j < vars->len_a + vars->len_b)
		{
			num = vars->stack_a.nums[0];
			if (((num >> i) & 1) == 1)
				rotate('a', vars);
			else
				push_b(0, vars);
		}
		while (vars->len_b != 0)
			push_a(0, vars);
		i++;
	}
}
