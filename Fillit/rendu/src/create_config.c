#include "../include/fillit.h"

t_config	*init_config(void)
{
	t_config	*config;

	config = (t_config*)malloc(sizeof(t_config));
	return (config);
}
