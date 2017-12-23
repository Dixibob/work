#include "libft.h"

int             get_next_line(int const fd, char **line)
{
        static char             *buff = "";
        int                     var;
        char                    *str;

        if (!line || fd < 0)
                return (-1);
        var = 1;
        if (buff[0] == '\0')
                buff = ft_strnew(0);
        while (var > 0)
        {
                if ((str = ft_strchr(buff, '\n')) != NULL)
                {
                        *str = '\0';
                        *line = ft_strdup(buff);
                        ft_memmove(buff, str + 1, ft_strlen(str + 1) + 1);
                        return (1);
                }
                buff = ft_join(fd, buff, &var);
        }
        return (var);
}

char    *ft_join(int const fd, char *buff, int *var)
{
        char    tmp[BUFF_SIZE + 1];
        char    *temp;

        *var = read(fd, tmp, BUFF_SIZE);
        tmp[*var] = '\0';
        temp = buff;
        buff = ft_strjoin(buff, tmp);
        ft_strdel(&temp);
        return (buff);
}
