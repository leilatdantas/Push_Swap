/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:22:43 by lebarbos          #+#    #+#             */
/*   Updated: 2023/10/03 14:40:14 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack *get_stack(int argc, char **argv)
{
	int i;
	t_stack *a;
	int	j;
	
	i = 1;
	a = NULL;
	while (i < argc)
	{
		j = ft_atoi2(argv[i]);
		ft_stackadd_back(&a, ft_stack_new(j));
		i++;
	}
	return (a);
}

int	main(int argc, char **argv)
{
	t_stack *a;
	
	a = NULL;
	if (argc <= 1)
	{
		write(1, "Error\n", 7);
		exit(1);
	}
	if(!validate_stack(argc, argv))
	{
		write(1, "Error\n", 7);
		exit(1);
	}
	else
		a = get_stack(argc, argv);
	// if(!check_repeat(&a));
	test_print(a);
}
