/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteratie_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tskomana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:28:26 by tskomana          #+#    #+#             */
/*   Updated: 2020/07/17 10:36:21 by tskomana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_iterative_factorial(int nb)
{
	int		i;
	 int	counter;

	if (nb < 0 || nb > 9)
		return (0);
	i = 2;
	counter= 1;
	while (i <= nb)
	{
		counter *= i;
		i++;
	}
	return (counter);
}
