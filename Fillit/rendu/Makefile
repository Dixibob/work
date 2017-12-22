NAME	= fillit

SRC		= src/algo.c \
		  src/algo_2.c \
		  src/check_tris.c \
		  src/create_config.c \
		  src/create_tris.c \
		  src/fillit.c \
		  src/grid_op.c \
		  src/main.c \
		  src/read_file.c 

OBJ		= $(patsubst src/%.c,./%.o,$(SRC))

INCLUDE	= include/fillit.h \
		  include/libft.h


$(NAME): $(OBJ)
	gcc -Wall -Werror -Wextra $(OBJ) -L libft/ -lft -o $(NAME)
	
./%.o: src/%.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

all: $(NAME)