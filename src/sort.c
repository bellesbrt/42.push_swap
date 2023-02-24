/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:07:30 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/17 00:43:40 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_size_3(t_vars *vars)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = vars->stack_a.nums[0];
	n2 = vars->stack_a.nums[1];
	n3 = vars->stack_a.nums[2];
	if (n1 > n2 && n3 > n1)
		swap('a', vars);
	else if (n1 > n2 && n2 > n3)
	{
		swap('a', vars);
		reverse_rotate('a', vars);
	}
	else if (n1 > n2 && n3 > n2)
		rotate('a', vars);
	else if (n1 < n3 && n2 > n3)
	{
		swap('a', vars);
		rotate('a', vars);
	}
	else if (n3 < n1 && n2 > n1)
		reverse_rotate('a', vars);
}

void	sort_size_5(t_vars *vars)
{
	int	min;

	min = get_min_value(vars->stack_a.nums, vars->len_a);
	while (vars->len_a > 3)
	{
		min = get_min_value(vars->stack_a.nums, vars->len_a);
		if (vars->stack_a.nums[0] == min)
			push_b(0, vars);
		if (vars->stack_a.nums[vars->len_a - 2] == min || \
			vars->stack_a.nums[vars->len_a - 1] == min)
			reverse_rotate('a', vars);
		else
			rotate('a', vars);
	}
	sort_size_3(vars);
	push_a(0, vars);
	push_a(0, vars);
}
