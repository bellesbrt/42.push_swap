/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:36:01 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/14 15:18:07 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_msg(int num, t_vars *vars)
{
	write(2, "Error\n", 6);
	if (num == 1)
		free(vars->stack_a.nums);
	if (num == 2)
	{
		free(vars->stack_a.nums);
		free(vars->sorted);
	}
	exit(EXIT_FAILURE);
}
