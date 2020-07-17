/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tskomana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:06:17 by tskomana          #+#    #+#             */
/*   Updated: 2020/07/17 12:48:37 by tskomana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
  int count;
  
  if (power > 0)
  {
    count = nb * ft_recursive_power(nb, power - 1);
    return (count);
  }
    return(1);
}
