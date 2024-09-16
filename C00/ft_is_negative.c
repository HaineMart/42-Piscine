/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastassiia <anastassiia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:58:30 by anlukman          #+#    #+#             */
/*   Updated: 2024/09/16 19:44:20 by anastassiia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

// Create a function that displays ’N’ or ’P’
//depending on the integer’s sign entered as a parameter.
//If n is negative, display ’N’. If n is positive or null, display ’P’.
//Here’s how it should be prototyped :
//void ft_is_negative(int n);

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	c;

// 	a = -5;
// 	b = 5;
// 	c = 0;
// 	ft_is_negative(a);
// 	ft_is_negative(b);
// 	ft_is_negative(c);
// 	return (0);
// }
