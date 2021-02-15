NAME 	= 	libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC		= 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \

SRCBON 	=  ft_lstadd_back.c \
		   ft_lstadd_front.c \
		   ft_lstclear.c \
		   ft_lstdelone.c \
		   ft_lstiter.c \
		   ft_lstlast.c \
		   ft_lstmap.c \
		   ft_lstnew \
		   ft_lstsize.c \

OBJ 	= $(SRC:.c=.o) # OBJ é igual aos ficheiros no SRC com a extensao .o
OBJBON 	= $(SRCBON:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ) # Ar e para criar um arquivo
			ar -rcs $@ $^

bonus: $(OBJBON) $(OBJ)
			ar -rcs $@ $^


clean: # Vai limpar os object files
			rm -rf $(OBJ)

fclean: clean # Vai limpar tudo
			rm -f $(NAME)-

re: fclean $(NAME)

rebonus: fclean bonus



# TESTAR E DEPOIS APAGAR

run: bonus
	sh ./test/run.sh

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

.PHONY: all, clean, fclean, re	#Para dizer que nao é um ficheiro