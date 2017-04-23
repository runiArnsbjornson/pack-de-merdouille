/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebladi <jdebladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 11:17:29 by jdebladi          #+#    #+#             */
/*   Updated: 2017/04/23 15:58:10 by jdebladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	init(t_data *data, int *ref)
{
	if (!data->piece)
	{
		if ((data->piece = malloc(sizeof(t_piece))) == 0)
			perror("Error malloc");
	}
	data->piece->x = -2;
	data->piece->y = -2;
	if (!data->board)
	{
		if ((data->board = malloc(sizeof(t_board))) == 0)
			perror("Error malloc");
	}
	data->board->x = -2;
	data->board->y = -2;
	ref[0] = 0;
	ref[1] = 0;
	ref[2] = 0;
	ref[3] += 1;
	ref[4] += 1;
}

int		main(void)
{
	t_data	data;
	int		ref[6];
	int		i;

	i = 0;
	while (i <= 5)
	{
		ref[i] = 0;
		++i;
	}
	init(&data, ref);
	parse(&data, ref);
	return (0);
}
