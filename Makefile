SRC_DIR = ./srcs

CC = gcc

CFLAGS += -Wall -Wextra -Werror -I./includes/

SRCS =	/main.c \
		/ft/ft_atoi.c \
		/ft/ft_fill_buffer.c \
		/ft/ft_strcat.c \
		/ft/ft_strcpy.c \
		/ft/ft_strdup.c \
		/ft/ft_strlcpy.c \
		/ft/ft_strlen.c \
		/get_map/check_charset.c \
		/get_map/check_data.c \
		/get_map/fill_matrix.c \
		/get_map/get_file.c \
		/get_map/get_map.c \
		/get_map/get_stdin.c \
		/solver/solve.c \
		
SRCS_FILES = $(addprefix $(SRC_DIR), $(SRCS))

OBJS = $(SRCS_FILES:.c=.o)

NAME = bsq

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME)  $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all re
