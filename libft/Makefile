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
		  ./ft_isascii.c		\
		  ./ft_isdigit.c		\
		  ./ft_islower.c		\
		  ./ft_isprime.c		\
		  ./ft_isspace.c		\
		  ./ft_isprint.c		\
		  ./ft_isupper.c		\
		  ./ft_itoa.c		\
		  ./ft_memchr.c	\
		  ./ft_memcmp.c	\
		  ./ft_memcpy.c	\
		  ./ft_memmove.c	\
		  ./ft_memset.c	\
		  ./ft_putchar.c		\
		  ./ft_putchar_fd.c		\
		  ./ft_putendl.c	\
		  ./ft_putendl_fd.c	\
		  ./ft_putstr.c	\
		  ./ft_putstr_fd.c	\
		  ./ft_putnbr.c		\
		  ./ft_putnbr_fd.c		\
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
		  ./ft_strmapi.c	\
		  ./ft_strnstr.c	\
		  ./ft_strncmp.c	\
		  ./ft_strrchr.c	\
		  ./ft_strtrim.c	\
		  ./ft_substr.c	\
		  ./ft_swap.c	\
		  ./ft_tolower.c	\
		  ./ft_toupper.c	\

OBJ		= $(SRC:.c=.o)

CFLAGS	= -Wall -Werror -Wextra

# ========== RULES ==========

$(NAME) : $(OBJ)
	ar csr $(NAME) $(OBJ)

$OBJ : $SRC
	gcc $(CFLAGS) -c $(SRC)

# ========== FUNCTIONS ==========

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re