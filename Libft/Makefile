# ========== VARIABLES ==========
NAME	= libft.a

SRC		= ./ft_atoi.c	\
		  ./ft_arrayintrev.c	\
		  ./ft_arrayintsort.c	\
		  ./ft_bzero.c	\
		  ./ft_calloc.c	\
		  ./ft_dectooct.c	\
		  ./ft_digitos.c	\
		  ./ft_isalnum.c	\
		  ./ft_isblank.c	\
		  ./ft_isalpha.c	\
		  ./ft_isascii.c	\
		  ./ft_isdigit.c	\
		  ./ft_islower.c	\
		  ./ft_isprime.c	\
		  ./ft_isspace.c	\
		  ./ft_isprint.c	\
		  ./ft_isupper.c	\
		  ./ft_itoa.c		\
		  ./ft_memchr.c	\
		  ./ft_memcmp.c	\
		  ./ft_memcpy.c	\
		  ./ft_memmove.c	\
		  ./ft_memset.c	\
		  ./ft_put_unsignbr_base.c		\
		  ./ft_putchar.c		\
		  ./ft_putchar_fd.c		\
		  ./ft_putchar_len.c		\
		  ./ft_putendl.c	\
		  ./ft_putendl_fd.c	\
		  ./ft_putstr.c	\
		  ./ft_putstr_len.c	\
		  ./ft_putstr_fd.c	\
		  ./ft_putnbr.c		\
		  ./ft_putnbr_fd.c		\
		  ./ft_putnbr_len.c		\
		  ./ft_split.c		\
		  ./ft_str_is_alpha.c	\
		  ./ft_str_is_numeric.c		\
		  ./ft_str_is_printable.c		\
		  ./ft_strcapitalize.c		\
		  ./ft_strchr.c		\
		  ./ft_strdup.c	\
		  ./ft_striteri.c	\
		  ./ft_strjoin.c		\
		  ./ft_strlcat.c		\
		  ./ft_strlcpy.c	\
		  ./ft_strlen.c	\
		  ./ft_strleni.c	\
		  ./ft_strmapi.c	\
		  ./ft_strnstr.c	\
		  ./ft_strncmp.c	\
		  ./ft_strrchr.c	\
		  ./ft_strtrim.c	\
		  ./ft_substr.c	\
		  ./ft_swap.c	\
		  ./ft_tolower.c	\
		  ./ft_toupper.c	\
		  ./ft_lstnew_bonus.c	\

BSRC = ./ft_lstnew_bonus.c	\
	./ft_lstadd_back_bonus.c	\
	./ft_lstadd_front_bonus.c	\
	./ft_lstclear_bonus.c	\
	./ft_lstdelone_bonus.c	\
	./ft_lstiter_bonus.c	\
	./ft_lstlast_bonus.c	\
	./ft_lstmap_bonus.c	\
	./ft_lstsize_bonus.c	\

OBJ		= $(SRC:.c=.o)
BOBJ	= $(BSRC:.c=.o)

CC = gcc -c
CO = ar csr
RM = rm -f

CFLAGS	= -Wall -Werror -Wextra
MFLAG = -fsanitize=address

# ========== RULES ==========

$(NAME) : $(OBJ)
	$(CO) $(NAME) $(OBJ)

$OBJ : $SRC
	$(CC) $(CFLAGS) $(SRC)

# ========== FUNCTIONS ==========

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(BSRC)
	$(CC) $(CFLAGS) $(SRC) $(BSRC)
	$(CO) $(NAME) $(OBJ) $(BOBJ)

.PHONY: all clean fclean re bonus
