#include "libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

int	fd_to_dest(int const fd, char **dest)
{
	static char	buff;
	int			octets;
    char        *str;

    buff[BUFF_SIZE + 1] = {'\n'};
	octets = read(fd, buff, BUFF_SIZE);
	if (octets > 0)
	{
        buff[octets] = '\0';
        str = ft_strjoin(*dest, buff);
        if (!str)
            return (-1);
        free(*dest);
        *dest = str;
	}
	return (octets);
}

int get_next_line(int const fd, char **line)
{
	static char	*dest = NULL;
	char		*n_index;
    int         octets;

    if (!dest && (dest = (char *)ft_memalloc(sizeof(char))) == NULL)
        return (-1);
	n_index = ft_strchr(dest, '\n');
	while (n_index == NULL)
	{
        octets = fd_to_dest(fd, &dest);
        if (octets == 0)
        {
            if ((n_index = ft_strchr(dest, '\0')) == dest)
                return (0);
        } else if (octets < 0)
            return (-1);
        else
            n_index = ft_strchr(dest, '\n');
	}
    *line = ft_strsub(dest, 0, n_index - dest);
    if (!*line)
        return (-1);
    n_index = ft_strdup(n_index + 1);
    free(dest);
    dest = n_index;
	return (1);
}