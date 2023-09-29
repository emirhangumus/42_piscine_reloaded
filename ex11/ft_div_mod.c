/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egumus <egumus@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:21:58 by egumus            #+#    #+#             */
/*   Updated: 2023/09/29 12:22:05 by egumus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		temp_div;
	int		temp_mod;

	temp_div = a / b;
	temp_mod = a % b;
	*div = temp_div;
	*mod = temp_mod;
}
