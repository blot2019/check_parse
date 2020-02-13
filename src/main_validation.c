/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemerald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 23:01:39 by gemerald          #+#    #+#             */
/*   Updated: 2020/02/09 15:15:57 by gemerald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		err_out(void)
{
	ft_putstr_fd("ERROR\n", 2);
	return (0);
}

char	*feel_map_file(int ac, char **av)
{
	int i;

	i = 0;
	while (++i < ac)
	{
		if (ft_strcmp("-v", av[i]))
			return (av[i]);
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	t_lemin lemin;

	if (!lets_read(&lemin, feel_map_file(ac, av)))
		return (err_out());
//	walker_kk(&lemin);
	free_for_all(&lemin);
	ft_putstr("[OK]\n");
	return (0);
}
