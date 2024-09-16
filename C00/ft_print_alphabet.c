/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastassiia <anastassiia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:14:22 by anlukman          #+#    #+#             */
/*   Updated: 2024/09/16 19:39:09 by anastassiia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}

// Create a function that displays the alphabet in lowercase,
//on a single line, by ascending order, starting from the letter ’a’.
// Here’s how it should be prototyped :
// void ft_print_alphabet(void);

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
