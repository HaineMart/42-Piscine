/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastassiia <anastassiia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:58:30 by anlukman          #+#    #+#             */
/*   Updated: 2024/09/16 19:41:19 by anastassiia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	w;

	w = 48;
	while (w <= 57)
	{
		write(1, &w, 1);
		w++;
	}
}

// Create a function that displays all digits,
//on a single line, by ascending order.
//Here’s how it should be prototyped :
// void ft_print_numbers(void);

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
