# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 13:21:53 by avilchez          #+#    #+#              #
#    Updated: 2022/12/05 11:54:54 by avilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== VARIABLES ==========
NAME := so_long

CC := gcc

CFLAGS := -g3 -Wall -Wextra -Werror -Iincludes/

SOURCE := src/*.c
GETNEXTLINE := gnl/*c
LIBRARY := -Lmlx -lmlx -framework OpenGL -framework AppKit
MFLAG := -fsanitize=address -g3
MINILIBX := mlx/

# ========== FUNCTIONS ==========
all:
	make -C $(MINILIBX)
	$(CC) $(CFLAGS) $(SOURCE) $(GETNEXTLINE) $(LIBRARY) -o $(NAME)

clean:

fclean: clean
		make clean -C $(MINILIBX)
		rm -rf $(NAME)

sanitize:
	$(CC) $(CFLAGS) $(MFLAG) $(SOURCE)

re: fclean all

run:	all
		./$(NAME) ./maps/map_s3.ber

git:
	@git add .
	@git commit -m "$m"
	@git push
	@echo "Commit sent to github"
# To call: make git m="my commit"

.PHONY: all clean fclean re sanitize #bonus
