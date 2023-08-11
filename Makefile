NAME = libftprintf.a

OBJ_DIR = ./trash/

SRC_DIR = ./Src/Mandatory/

SRC_DIR_BONUS = ./Src/Bonus/

INC_DIR = ./includes/

SRCS = ft_printf.c printf_utils.c

SRCS_BONUS = ft_printf_bonus.c printf_utils_bonus.c

OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

OBJS_BONUS = $(addprefix $(OBJ_DIR), $(SRCS_BONUS:.c=.o))

CC = gcc

CFLAGS = -Wall -Wextra -Werror

rm = rm -rf

# Colors, because colors are nice.

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m
RESET = \033[0m

all : $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p trash
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

bonus : $(OBJS_BONUS)
	@ar rcs $(NAME) $(OBJS_BONUS)

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

.PHONY : all clean fclean re git bonus