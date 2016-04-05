##
## Makefile for Mafefile in /home/hubert_i/rendu/PSU_2015_my_printf
##
## Made by leo hubert
## Login   <hubert_i@epitech.net>
##
## Started on  Wed Nov  4 09:57:56 2015 leo hubert
<<<<<<< HEAD
## Last update Tue Apr  5 10:55:37 2016 Léo Hubert
##

LIB  	=	-lm -lmy -L./lib/
#CFLAGS  +=	-Werror
CFLAGS  +=      -W -Wextra -Wall -pedantic
=======
## Last update Tue Apr  5 10:53:53 2016 Lucas Gambini
##

LIB  	=	-lm -lmy -L./lib/
CFLAGS  +=      -W -Wextra -Werror -Wall -pedantic
>>>>>>> ff825aa279864003b4bab22bd4024b452f5245ae
CFLAGS  +=      -I./include/

CC	=	gcc

NAME    =	la_mine\#CommeEnSoiree\#Melvin\#DoucheA5Heures\#LeRelou

SRC	=	src/main.c

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
		@paplay include/sound/end.ogg &

%.o:		%.c
		@$(CC) $(CFLAGS) -c $^ -o $@ && \
		$(ECHO) $(GREEN) "[OK] gcc" $(TEAL) $^ $(DEFAULT) || \
		$(ECHO) $(RED) "[ERROR] gcc" $(TEAL) $^ $(DEFAULT)

makelib:
		@make -C lib/my/ --no-print-directory


.PHONY: 	all clean fclean re encore blague makelib
