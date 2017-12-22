#include "../include/fillit.h"

int		brain_rec(t_config *config, t_coord *pos, char **grid, int iter)
{
	if (iter == config->nbr_piece)
		return (1);
	if (pos->x < 0)
		return (0);
	if (ft_is_putable(grid, pos, &config->list_tris[iter]))
	{
		ft_put_piece(grid, pos, &config->list_tris[iter]);
		if (brain_rec(config, ft_new_point(0, 0), grid, iter + 1))
			return (1);
		ft_clean_grid(grid, config->list_tris[iter].name);
	}
	return (brain_rec(config, ft_next_point(pos, grid), grid, iter));
}

void	algo(t_config *config)
{
	char	**grid;
	t_coord	*pos;

	pos = ft_new_point(0, 0);
	config->min_size = 2;
	grid = ft_new_grid(config->min_size);
	while (!(brain_rec(config, pos, grid, 0)))
	{
		config->min_size++;
		grid = ft_new_grid(config->min_size);
	}
	config->grid = ft_copy_grid(grid, config->min_size);
}
