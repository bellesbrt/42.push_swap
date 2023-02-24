/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 01:03:38 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/14 15:18:35 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	free_pointers(int *ptr_a, int *ptr_b)
{
	free(ptr_a);
	free(ptr_b);
}

void	push_a(int i, t_vars *vars)
{
	int	*new_a;
	int	*new_b;
	int	*ptr_a;
	int	*ptr_b;

	ptr_a = &vars->stack_a.nums[0];
	ptr_b = &vars->stack_b.nums[0];
	if (vars->len_b == 0)
		return ;
	new_b = ft_calloc(vars->len_b - 1, sizeof(int));
	new_a = ft_calloc(vars->len_a + 1, sizeof(int));
	if (!new_a || !new_b)
		exit(EXIT_FAILURE);
	vars->len_b--;
	vars->len_a++;
	new_a[0] = vars->stack_b.nums[0];
	while (++i < vars->len_a)
		new_a[i] = vars->stack_a.nums[i - 1];
	vars->stack_a.nums = new_a;
	i = 0;
	while (++i <= vars->len_b)
		new_b[i - 1] = vars->stack_b.nums[i];
	vars->stack_b.nums = new_b;
	free_pointers(ptr_a, ptr_b);
	ft_printf("pa\n");
}

void	push_b(int i, t_vars *vars)
{
	int	*new_a;
	int	*new_b;
	int	*ptr_a;
	int	*ptr_b;

	ptr_a = &vars->stack_a.nums[0];
	ptr_b = &vars->stack_b.nums[0];
	if (vars->len_a == 0)
		return ;
	new_b = ft_calloc(vars->len_b + 1, sizeof(int));
	new_a = ft_calloc(vars->len_a - 1, sizeof(int));
	if (!new_a || !new_b)
		exit(EXIT_FAILURE);
	vars->len_b++;
	vars->len_a--;
	new_b[0] = vars->stack_a.nums[0];
	while (++i < vars->len_b)
		new_b[i] = vars->stack_b.nums[i - 1];
	vars->stack_b.nums = new_b;
	i = 0;
	while (++i <= vars->len_a)
		new_a[i - 1] = vars->stack_a.nums[i];
	vars->stack_a.nums = new_a;
	free_pointers(ptr_a, ptr_b);
	ft_printf("pb\n");
}
