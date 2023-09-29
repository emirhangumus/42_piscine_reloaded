/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egumus <egumus@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:23:45 by egumus            #+#    #+#             */
/*   Updated: 2023/09/29 12:24:27 by egumus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
