/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:16:27 by lebarbos          #+#    #+#             */
/*   Updated: 2023/11/06 15:53:03 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_free(void *x)
{
	if (!x)
		return ;
	free(x);
}

void	ft_free_array(char	**array)
{
	char	*tmp;

	if (!array)
		return ;
	while (*array)
	{
		tmp = *array;
		array++;
		free(tmp);
	}
	*array = NULL;
}

void	ft_error_print(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
