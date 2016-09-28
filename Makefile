NAME = libft.a

SRC = ft_isalpha.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_tolower.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strlcat.c \
		ft_atoi.c \
		ft_memccpy.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \

OBJS = ft_isalpha.o \
		ft_strlen.o \
		ft_toupper.o \
		ft_isalnum.o \
		ft_isdigit.o \
		ft_tolower.o \
		ft_isascii.o \
		ft_isprint.o \
		ft_strdup.o \
		ft_strcpy.o \
		ft_strncpy.o \
		ft_strcat.o \
		ft_strncat.o \
		ft_strcmp.o \
		ft_strncmp.o \
		ft_strstr.o \
		ft_strnstr.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_memcmp.o \
		ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memmove.o \
		ft_memchr.o \
		ft_strlcat.o \
		ft_atoi.o \
		ft_memccpy.o \
		ft_putchar.o \
		ft_putstr.o \
		ft_putendl.o \
		ft_putnbr.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o \
		ft_memalloc.o \
		ft_memdel.o \
		ft_strnew.o \
		ft_strdel.o \
		
CC = gcc

CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all