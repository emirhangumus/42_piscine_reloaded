/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egumus <egumus@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:22:18 by egumus            #+#    #+#             */
/*   Updated: 2023/09/29 14:24:04 by egumus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (factorial);
	else
	{
		while (i <= nb)
		{
			factorial *= i;
			i++;
		}
		return (factorial);
	}
}
