#include "./libft/includes/libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int     main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open("./fichier.txt", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	while ((i = get_next_line((int const)fd, &line)) > 0)
	{
		ft_putendl(line);
		free (line);
	}
	return (1);
}
