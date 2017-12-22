make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o ../test/main.o -c ../test/main.c
clang -o test_gnl ../test/main.o get_next_line.o -I libft/includes -L libft/ -lft
