/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:16:27 by lebarbos          #+#    #+#             */
/*   Updated: 2023/10/27 14:53:03 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_error_print(t_stack **a)
{
	write(1, "Error\n", 7);
	ft_stackclear(a, ft_free);
	exit(EXIT_FAILURE);
}
