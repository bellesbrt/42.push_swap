/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 00:16:52 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/17 00:44:25 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_vars	vars;

	if (argc == 2 || (argc == 3 && \
		ascii_to_long_int(argv[1]) < ascii_to_long_int(argv[2])))
		return (0);
	check_args(argc, argv, &vars);
	init_vars(&vars, argv, argc);
	if (argc <= 3 && vars.is_sorted == FALSE)
		rotate('a', &vars);
	else if (argc <= 4)
		sort_size_3(&vars);
	else if (argc <= 6)
		sort_size_5(&vars);
	else
		sort_plus(0, 0, 0, &vars);
	free(vars.sorted);
	free(vars.stack_a.nums);
	if (argc > 4)
		free(vars.stack_b.nums);
}
