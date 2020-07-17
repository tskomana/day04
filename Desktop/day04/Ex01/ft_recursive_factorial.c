/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tskomana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:14:02 by tskomana          #+#    #+#             */
/*   Updated: 2020/07/17 11:17:43 by tskomana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return(0);
	if(nb == 0 || nb == 1)
		return(1);
	return nb * ft_recursive_factorial(nb - 1);
}
