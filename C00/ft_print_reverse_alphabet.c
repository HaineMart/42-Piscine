/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastassiia <anastassiia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:14:22 by anlukman          #+#    #+#             */
/*   Updated: 2024/09/16 19:40:29 by anastassiia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		write(1, &a, 1);
		a--;
	}
}

// Create a function that displays the alphabet in lowercase,
//on a single line, descending order, starting from the letter ’z’.
// Here’s how it should be prototyped :
// void ft_print_reverse_alphabet(void);

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
