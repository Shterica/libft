SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
			ft_split.c

BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \

OBJ := $(patsubst %.c, %.o, $(SRCS))

BONUS_OBJ := $(patsubst %.c, %.o, $(BONUS))

H = libft.h

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rsc $@ $(OBJ)
	@echo $(NAME) compiled

%.o: %.c $(H)
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	@rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

bonus: $(BONUS_OBJ)
	@ar -rsc $(NAME) $(BONUS_OBJ)
	@echo $(NAME) compiled

norm:
	norminette -R CheckForbiddenSourceHeader $(SRCS) $(BONUS)

.PHONY: re clean fclean norm bonus