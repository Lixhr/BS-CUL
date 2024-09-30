SRC_DIR = ./srcs

CC = gcc

FLAGS += -Wall -Wextra -Werror -I./includes/

SRCS = 	$(SRC_DIR)/ft_putstr_err.c \
	$(SRC_DIR)/main.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/print.c \
	$(SRC_DIR)/ft_strcmp.c \

OBJS = $(SRCS:.c=.o)

NAME = ft_tail


$(NAME):$(OBJS)
	$(CC) $(FLAGS) -o $(NAME)  $(OBJS)

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)


.PHONY: fclean clean all 
