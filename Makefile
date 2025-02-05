NAME = libftprintf.a

SRC = ft_printf.c ft_putch.c ft_puthex.c ft_putnbr.c ft_putptr.c \
	ft_putstr.c ft_putuint.c \

OBJ = $(SRC:.c=.o)

LIBFT_PATH = ./libft/

LIBFT = $(LIBFT_PATH)libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)
	
$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) 

clean: 
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re : fclean all

.PHONY: all clean fclean re