NAME = lift.a

SRC = ft_atoi.c \
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
			ft_strcmp.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \


OBJ = $(SRC:.c=.o) # OBJ é igual aos ficheiros no SRC com a extensao .o

all: $(NAME)

$(NAME) : $(OBJ) # Ar e para criar um arquivo
			ar -rcs $@ $^
# -rcs

clean: # Vai limpar os object files
			rm -rf $(OBJ)

fclean: clean # Vai limpar tudo
			rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all, clean, fclean, re	#Para dizer que nao é um ficheiro