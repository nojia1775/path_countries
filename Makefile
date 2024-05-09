CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS_DIR = obj

SRCS = src/main.c \
       src/itineraire.c \
       src/utils.c \
       src/game.c \
       src/find_path.c \
       src/bot.c \
       src/parsing.c
 
OBJS = $(patsubst src/%.c, $(OBJS_DIR)/%.o, $(SRCS))

NAME = path_countries

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -lreadline

$(OBJS_DIR)/%.o: src/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re