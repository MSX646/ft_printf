NAME = libftprintf.a

AR 	 = ar rcs

SRCS = \
	ft_printf.c \
	base.c \
	str.c \
	hex.c \
	int.c \
	utils.c \

OBJS = $(patsubst %.c,%.o,$(SRCS))

D_FILES = $(patsubst %.c,%.d,$(SRCS))

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@ -MD

$(NAME): $(OBJS)
		$(AR) $(NAME) $?

all:	$(NAME)

clean:
		$(RM) $(OBJS)  $(D_FILES) 

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
