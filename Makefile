CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS_DIR = obj

SRCS = src/main.c \
       src/itineraire.c \
       src/utils.c

OBJS = $(patsubst src/%.c, $(OBJS_DIR)/%.o, $(SRCS))

NAME = path_countries

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -lreadline LIBFT/libft.a

$(OBJS_DIR)/%.o: src/%.c | $(OBJS_DIR)
	make -C LIBFT/
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

all: $(NAME)

clean:
	make clean -C LIBFT/
	rm -f $(OBJS)

fclean: clean
	make fclean -C LIBFT/
	rm -f $(NAME)

re: fclean all
	make re -C LIBFT/

.PHONY: all clean fclean re