/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 00:16:56 by inicole-          #+#    #+#             */
/*   Updated: 2023/02/17 00:44:09 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

# define TRUE 1
# define FALSE 0
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_stack
{
	int	*nums;
}	t_stack;

typedef struct s_vars
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		len_a;
	int		len_b;
	int		max;
	int		min;
	int		*sorted;
	int		is_sorted;
	int		min_a;
}	t_vars;

long int	ascii_to_long_int(const char *str);
void		sort_plus(int max, int num, int max_bits, t_vars *vars);
void		bubble_sort(int *arr, int n);
void		check_args(int argc, char *argv[], t_vars *vars);
void		check_range(int argc, char *argv[], t_vars *vars);
void		error_msg(int num, t_vars *vars);
void		sort_size_5(t_vars *vars);
int			get_max_value(int *array, int n);
int			get_min_value(int *array, int n);
void		init_vars(t_vars *arr, char *argv[], int argc);
void		is_sorted(int argc, t_vars *vars);
void		push_a(int i, t_vars *vars);
void		push_b(int i, t_vars *vars);
void		reverse_rotate(char c, t_vars *vars);
void		rotate(char c, t_vars *vars);
void		swap(char c, t_vars *vars);
void		swap_both(t_vars *vars);
void		sort_size_3(t_vars *vars);
#endif