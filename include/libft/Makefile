# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lde-la-h <lde-la-h@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/08 11:13:32 by lde-la-h      #+#    #+#                  #
#    Updated: 2021/11/23 16:37:26 by lde-la-h      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
HEADER	= .
GREEN = \x1b[32m
RESET = \033[0m
RED   = \x1b[31m

# AR is an archiving tool
AR		= ar rcs

SRCS	= src/ft_abs.c \
		src/ft_atoi.c \
		src/ft_bzero.c \
		src/ft_calloc.c \
		src/ft_intlen.c \
		src/ft_isalnum.c \
		src/ft_isalpha.c \
		src/ft_isascii.c \
		src/ft_isdigit.c \
		src/ft_islower.c \
		src/ft_isprint.c \
		src/ft_isspace.c \
		src/ft_isupper.c \
		src/ft_itoa.c \
		src/ft_itoa_base.c \
		src/ft_lstadd_back.c \
		src/ft_lstadd_front.c \
		src/ft_lstclear.c \
		src/ft_lstdelone.c \
		src/ft_lstiter.c \
		src/ft_lstlast.c \
		src/ft_lstmap.c \
		src/ft_lstnew.c \
		src/ft_lstsize.c \
		src/ft_max.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_memcpy.c \
		src/ft_memmove.c \
		src/ft_memset.c \
		src/ft_min.c \
		src/ft_neg.c \
		src/ft_pow.c \
		src/ft_putchar.c \
		src/ft_putchar_fd.c \
		src/ft_putendl.c \
		src/ft_putendl_fd.c \
		src/ft_putnbr.c \
		src/ft_putnbr_fd.c \
		src/ft_putstr.c \
		src/ft_putstr_fd.c \
		src/ft_realloc.c \
		src/ft_split.c \
		src/ft_sqrt.c \
		src/ft_str_append.c \
		src/ft_strchr.c \
		src/ft_strchrn.c \
		src/ft_strclen.c \
		src/ft_strdup.c \
		src/ft_striter.c \
		src/ft_striteri.c \
		src/ft_strjoin.c \
		src/ft_strlcat.c \
		src/ft_strlcpy.c \
		src/ft_strlen.c \
		src/ft_strmap.c \
		src/ft_strmapi.c \
		src/ft_strncmp.c \
		src/ft_strnstr.c \
		src/ft_strrchr.c \
		src/ft_strrev.c \
		src/ft_strtrim.c \
		src/ft_substr.c \
		src/ft_tolower.c \
		src/ft_toupper.c \
		src/gnl/ft_get_next_line.c \

OBJS	= ${SRCS:.c=.o}

# Compile, default rule.
all: $(NAME)

# To create the .o files, take the .c file and
# use -c to compile or assemble the source file, then -o to output.
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I $(HEADER)

# Compile everything, first create the objects.
$(NAME): $(OBJS)
	@echo "Compiling $(GREEN)libft $(RESET)..."
	$(AR) $(NAME) $(OBJS)

# Clean object files
clean:
	rm -f $(OBJS)

# Clean library file
fclean: clean
	rm -f $(NAME)

# Re-compile
re:	fclean all

# Phonies as not to confuse make, these are actual commands, not files.
.PHONY: all, clean, fclean, re
