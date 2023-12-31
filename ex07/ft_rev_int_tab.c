/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:49:14 by event             #+#    #+#             */
/*   Updated: 2023/07/06 17:33:20 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = t;
		i++;
	}
}
