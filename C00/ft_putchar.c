/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastassiia <anastassiia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:29:50 by anlukman          #+#    #+#             */
/*   Updated: 2024/09/16 19:35:59 by anastassiia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Write a function that displays the character passed as a parameter.
// It will be prototyped as follows : void ft_putchar(char c);
// To display the character, you must use the write function as follows.

// int	main(void)
// {
// 	char	c;

// 	c = 'A';
// 	ft_putchar(c);
// 	return (0);
// }
