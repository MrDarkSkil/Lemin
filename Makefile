##
## Makefile for la_mine in /home/hubert_i/rendu/2015/Lemin
## 
## Made by Léo Hubert
## Login   <hubert_i@epitech.net>
## 
## Started on  Tue Apr  5 13:41:24 2016 Léo Hubert
## Last update Sun Apr 24 16:16:18 2016 boris saint-bonnet
##

LIB  	=	-lm -lmy -L./lib/
CFLAGS  +=	-Werror
CFLAGS  +=      -W -Wextra -Wall -pedantic -ansi
CFLAGS  +=      -I./include/

CC	=	gcc -g -g3

NAME    =	lem_in


LIST	=	src/linked_list/create_list.c		\
		src/linked_list/find_link.c		\
		src/linked_list/push.c			\

PARSING =	src/parsing/checking.c			\
		src/parsing/check_start_end.c		\
		src/parsing/check_starting_line.c	\
		src/parsing/epurstr.c			\
		src/parsing/check_list.c		\
		src/parsing/my_read_inf.c		\
		src/parsing/my_realloc.c		\
		src/parsing/my_wordtab.c		\
		src/parsing/push_link.c			\
		src/parsing/push_to_list.c		\
		src/parsing/push_with_comment.c		\
		src/parsing/xmalloc.c			\
		src/parsing/my_free_tab.c		\
		src/parsing/my_strdup.c			\
		src/new/first_line.c			\

ALGO	=	src/algo/initAlgo.c			\
		src/algo/ant.c				\

SRC	=	$(LIST)					\
		$(PARSING)				\
		$(ALGO)					\
		src/main.c				\
		src/my_str_to_wordtab.c			\
		src/get_next_line.c			\

ECHO	=	/bin/echo -e
DEFAULT	=	"\033[00m"
GREEN	=	"\033[0;32m"
TEAL	=	"\033[1;36m"
RED	=	"\033[5;31m"
YELLOW  =	"\033[1;33m"
FINISH  =       "\033[5;1;35m"

OBJ	=	$(SRC:.c=.o)

all:		makelib $(NAME)

clean:
		@make clean -C lib/my/ --no-print-directory && \
		$(ECHO) $(GREEN) "[OK]" $(YELLOW) "make clean lib" $(DEFAULT) || \
		$(ECHO) $(RED) "[ERROR]" $(YELLOW) "make clean lib" $(DEFAULT)
		@rm -f $(OBJ) && \
		$(ECHO) $(GREEN) "[OK] rm" $(TEAL) $(OBJ) $(DEFAULT) || \
		$(ECHO) $(RED) "[ERROR] rm" $(TEAL) $(OBJ) $(DEFAULT)

fclean:		clean
		@make fclean -C lib/my/ --no-print-directory && \
		$(ECHO) $(GREEN) "[OK]" $(YELLOW) "make fclean lib" $(DEFAULT) || \
		$(ECHO) $(RED) "[ERROR]" $(YELLOW) "make flcean lib" $(DEFAULT)
		@rm -f $(NAME) && \
		$(ECHO) $(GREEN) "[OK] rm" $(TEAL) $(NAME) $(DEFAULT) || \
		$(ECHO) $(RED) "[ERROR] rm" $(TEAL) $(NAME) $(DEFAULT)

re:		encore fclean all

## Sound ----------------------------------------------------------------------

encore:
		@paplay include/sound/encore.ogg &
blague:
		@paplay include/sound/humour.ogg &

## Compilation -----------------------------------------------------------------

$(NAME):	$(OBJ)
		@$(CC) $(OBJ) -o $(NAME) $(LIB) && \
		$(ECHO) $(GREEN) "[OK] gcc" $(TEAL) $(OBJ) $(DEFAULT) || \
		$(ECHO) $(RED) "[ERROR] gcc" $(TEAL) $(OBJ) $(DEFAULT)
		@$(ECHO) $(FINISH) "\nCompilation Succesfully of "$(NAME) $(DEFAULT)
		@$(ECHO) $(DEFAULT)
		@paplay include/sound/end.ogg &

%.o:		%.c
		@$(CC) $(CFLAGS) -c $^ -o $@ && \
		$(ECHO) $(GREEN) "[OK] gcc" $(TEAL) $^ $(DEFAULT) || \
		$(ECHO) $(RED) "[ERROR] gcc" $(TEAL) $^ $(DEFAULT)

makelib:
		@make -C lib/my/ --no-print-directory


.PHONY: 	all clean fclean re encore blague makelib
