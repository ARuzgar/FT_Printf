NAME = ft_printf

OBJ_DIR = ./trash/

SRCS = ft_printf.c printf_utils.c 

OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

rm = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)%.o : %.c
	@mkdir -p trash
	@$(CC) $(CFLAGS) -c $< -o $@

clean : 
	@$(rm) $(OBJ_DIR)

fclean : clean
	@$(rm) $(NAME)

git : 
	git status
	git add .
	git status
	git commit -m "Make Git Update"
	git push

re : fclean all

.PHONY : all clean fclean re git