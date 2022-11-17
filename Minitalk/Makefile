# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 13:21:53 by avilchez          #+#    #+#              #
#    Updated: 2022/11/11 20:29:11 by avilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== VARIABLES ==========
NAME_C = client
NAME_S = server

SRC_C = ./src/client.c	\
	  	./src/functions.c \

SRC_S = ./src/server.c	\
	  	./src/functions.c	\

OBJ_C		= $(SRC_C:.c=.o)
OBJ_S		= $(SRC_S:.c=.o)

# ========== VARIABLES BONUS==========

NAME_C_B = client_bonus
NAME_S_B = server_bonus

SRC_C_B = ./src/client_bonus.c	\
	  	./src/functions.c \

SRC_S_B = ./src/server_bonus.c	\
	  	./src/functions.c	\

OBJ_C_B		= $(SRC_C_B:.c=.o)
OBJ_S_B		= $(SRC_S_B:.c=.o)

# ========== VARIABLES GENERICAS ==========

CC = clang
RM = rm -rf

CFLAGS	= -Wall -Werror -Wextra
MFLAG = -fsanitize=address -g3
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

# ========== RULES ==========

$(NAME_C) : $(OBJ_C) $(OBJ_S)
		  @echo "Compilando y Creando Ejecutable"
		  $(CC) $(CFLAGS) $(OBJ_C) -o $(NAME_C)
		  $(CC) $(CFLAGS) $(OBJ_S) -o $(NAME_S)
		  @echo "Ficheros ejecutables completados"

$OBJ_C : $SRC_C
	@echo "Compilando Cliente"
	$(CC) $(CFLAGS) $(SRC_C)
	@echo "Compilacion Cliente completada"

$OBJ_S : $SRC_S
	@echo "Compilando Servidor"
	$(CC) $(CFLAGS) $(SRC_S)
	@echo "Compilacion Servidor completada"

# ========== RULES BONUS==========

$(NAME_C_B) : $(OBJ_C_B) $(OBJ_S_B)
		  @echo "Compilando y Creando Ejecutable"
		  $(CC) $(CFLAGS) $(OBJ_C_B) -o $(NAME_C_B)
		  $(CC) $(CFLAGS) $(OBJ_S_B) -o $(NAME_S_B)
		  @echo "Ficheros ejecutables completados"

$OBJ_C_B : $SRC_C_B
	@echo "Compilando Cliente"
	$(CC) $(CFLAGS) $(SRC_C_B)
	@echo "Compilacion Cliente completada"

$OBJ_S_B : $SRC_S_B
	@echo "Compilando Servidor"
	$(CC) $(CFLAGS) $(SRC_S_B)
	@echo "Compilacion Servidor completada"

# ========== FUNCTIONS ==========

all: $(NAME_C)

bonus: $(NAME_C_B)

clean:
	$(RM) $(OBJ_C) $(OBJ_S) $(OBJ_C_B) $(OBJ_S_B)

fclean: clean
	$(RM) $(NAME_C) $(NAME_S) $(NAME_C_B) $(NAME_S_B)

re: fclean all

sanitize:
	$(CC) $(CFLAGS) $(MFLAG) $(SRC)

.PHONY: all clean fclean re sanitize bonus
