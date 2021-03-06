/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gficara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:51:42 by gficara           #+#    #+#             */
/*   Updated: 2017/11/08 10:58:34 by gficara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
