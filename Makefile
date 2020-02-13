#Compiler Options
C_FLAGS = -Wall -Wextra -Werror
#Filenames
LIBFT_DIR := libft/
NAME := lem-in
SRCS := main_validation.c create_links.c pars_hex.c pars_utils.c structure_init.c structure_init_2.c\
		hash_function.c hash_utils.c make_free.c validate_rooms.c structure_init_1.c structure_init_3.c\
		validate_rooms_01.c
OBJECTS := $(SRCS:.c=.o)
HEADER = libft/libft.h
all: lib $(NAME)
$(NAME): $(OBJECTS)
	gcc -o $(NAME) $(OBJECTS) -L$(LIBFT_DIR) -lft

lib:
	make -C $(LIBFT_DIR)	

$(OBJECTS): %.o: %.c
	gcc $(C_FLAGS) -o $@ -c $<

clean:
	make clean -C $(LIBFT_DIR)
	/bin/rm -f $(OBJECTS)
fclean: clean
	make fclean -C $(LIBFT_DIR)
	/bin/rm -f $(NAME)
	/bin/rm -f libft.a
re: fclean all

