# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lde-la-h <lde-la-h@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/27 11:32:06 by lde-la-h      #+#    #+#                  #
#    Updated: 2021/11/30 12:34:07 by lde-la-h      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror -Wunreachable-code
NAME	= push_swap
LIBFT	= include/libft
HEADER	= include/

SRCS	= 	./src/error/error.c \
			./src/handle.c \
			./src/main.c \
			./src/operations/push.c \
			./src/operations/reverse.c \
			./src/operations/rotate.c \
			./src/operations/swap.c \
			./src/sort.c \
			./src/utils/utils.c \

OBJS	= ${SRCS:.c=.o}

# Compile, default rule.
all: $(NAME)

# To create the .o files, take the .c file and
# use -c to compile or assemble the source file, then -o to output.
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I $(HEADER) -I $(LIBFT) -O3

# Compile everything, first create the objects.
$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS) $(LIBFT)/libft.a

# Clean object files
clean:
	rm -f $(OBJS)

# Clean library file
fclean: clean
	$(MAKE) -C $(LIBFT) fclean
	rm -f $(NAME)

# Re-compile
re:	fclean all

# Phonies as not to confuse make, these are actual commands, not files.
.PHONY: all, clean, fclean, re
