/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tskomana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:38:35 by tskomana          #+#    #+#             */
/*   Updated: 2020/07/17 11:42:20 by tskomana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;          
	int counter;

	if (power < 0)
		return (0);
	counter = 2;        
	i = 0;
	while (i < power)
	{
		counter = counter * nb;
		i++;
	}
	return (counter);
}
