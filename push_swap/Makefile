NAME 	=	push_swap

NAME_B	= 	checker

CFILES	=	main.c check_input.c help/free_functions.c help/list_functions.c sort_functions.c\
			help/actions1.c small/sort_small.c small/sort_utils.c help/actions2.c big/big_sort.c\
			big/big_sort_utils.c main_utils.c

CFILES_B	=	bonus/checker.c bonus/checker_check_input.c bonus/checker_utils.c bonus/checker_main_utils.c\
				bonus/input_pars.c	bonus/actions/actions1.c bonus/actions/actions2.c bonus/actions/actions3.c

OBJECTS	= $(CFILES:.c=.o)

OBJECTS_B = $(CFILES_B:.c=.o)

D_FILES =	$(patsubst %.c,%.d,$(CFILES))

D_FILES_B =	$(patsubst %.c,%.d,$(CFILES_B))

LIB_PATH = libft/

BONUS_PATH = bonus/

CC = cc

CFLAGS = -Wall -Wextra -Werror

.PHONY	:	all clean fclean re bonus

all		: lib $(NAME)

lib		:
	make -C $(LIB_PATH) all

bonus	: lib $(NAME_B)

$(NAME)	:	$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIB_PATH)libft.a -o $(NAME)

$(NAME_B)	:	$(OBJECTS_B)
	$(CC) $(CFLAGS) $(OBJECTS_B) $(LIB_PATH)libft.a -o $(NAME_B)

%.o 	:	%.c	$(LIB_PATH)libft.a Makefile
	$(CC) $(CFLAGS) -c $< -o $@ -MD


include $(wildcard $(D_FILES))
include $(wildcard $(D_FILES_B))

clean	:
	make -C $(LIB_PATH) clean
	rm -f $(OBJECTS_B) $(D_FILES_B)
	rm -f $(OBJECTS) $(D_FILES)

fclean	:	clean
	make -C $(LIB_PATH) fclean
	rm -f $(NAME_B)
	rm -f $(NAME)

re		:	fclean all
