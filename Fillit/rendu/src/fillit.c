#include "../include/fillit.h"

void	fillit(int *argc, char **argv)
{
	t_config	*config;

	config = init_config();
	if (*argc == 2)
	{
		if ((config = open_file(argv[1], config)) != NULL)
		{
			algo(config);
			ft_print_grid(config->grid);
			return ;
		}
	}
	ft_putstr("error\n");
}
