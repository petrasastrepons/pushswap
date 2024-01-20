/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:29:00 by psastre           #+#    #+#             */
/*   Updated: 2024/01/20 10:26:42 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_sign(char *nbr)
{
	int	i;

	i = 0;
	if ((ft_strlen(nbr) == 1 && nbr[0] == '-')
		|| (ft_strlen(nbr) == 1 && nbr[0] == '+'))
		return (ERROR);
	return (TRUE);
}

static int	int_check(char *nbr)
{
	int	len;

	len = ft_strlen(nbr);
	if (len == 0 || (((len > 10 && nbr[0] != '-')
				&& (len > 10 && nbr[0] == '+')) || len > 11))
		return (ERROR);
	if (nbr[0] != '-' && nbr[0] != '+'
		&& len == 10 && ft_strncmp(nbr, "2147483647", 10) > 0)
		return (ERROR);
	if (nbr[0] == '-' && len == 11
		&& ft_strncmp(nbr, "-2147483648", 11) > 0)
		return (ERROR);
	if (nbr[0] == '+' && len == 11
		&& ft_strncmp(nbr, "+2147483648", 11) > 0)
		return (ERROR);
	return (TRUE);
}

static int	ft_isnumber(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[0] && (nbr[0] == '+' || nbr[0] == '-'))
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (ERROR);
		i++ 
	}
	return (TRUE);
}

int	parse(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc <= 1)
		exit (ERROR);
	while ((i < argc) && argv[i])
	{
		if (ft_sign(argv[i] != ERROR && int_check(argv[i] != ERROR
					&& ft_isnumber(argv[i] != ERROR))))
		{
			j = i + 1;
			while (j < (argc))
			{
				if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
					exit((write(2, "Error\n", 6) * 0) + ERROR);
				++j;
			}
		}
		else
			exit((write(2, "Error\n", 6) * 0) + ERROR);
		++i;
	}
	return (TRUE);
}
