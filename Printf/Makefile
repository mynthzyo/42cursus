# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 13:21:53 by avilchez          #+#    #+#              #
#    Updated: 2022/05/25 15:51:09 by avilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== VARIABLES ==========
NAME = libftprintf.a

SRC = ./src/ft_printf.c	\
	  ./src/ft_libprintf.c	\

OBJ		= $(SRC:.c=.o)
#BOBJ	= $(BSRC:.c=.o)
#LIBFT = ../Libft/

CC = gcc -c
CO = ar csr
RM = rm -rf

CFLAGS	= -Wall -Werror -Wextra
MFLAG = -fsanitize=address -g3
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

# ========== RULES ==========

$(NAME) : $(OBJ)
#		  $(MAKE) -C $(LIBFT)
		  @echo "Creando Ejecutable"
		  $(CO) $(NAME) $(OBJ)
		  @echo "Fichero ejecutable completado"

$OBJ : $SRC
	@echo "Compilando SRC"
#	$(CC) $(CFLAGS) $(LIBFT)./libft.a $(SRC)
	$(CC) $(CFLAGS) $(SRC)
	@echo "Compilacion completada"

# ========== FUNCTIONS ==========

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

sanitize:
	$(CC) $(CFLAGS) $(MFLAG) $(SRC)

#bonus: $(BSRC)
#	$(CC) $(CFLAGS) $(SRC) $(BSRC)
#	$(CO) $(NAME) $(OBJ) $(BOBJ)

.PHONY: all clean fclean re sanitize #bonus
