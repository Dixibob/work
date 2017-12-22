#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

int get_next_line(int const fd, char **line);

#endif