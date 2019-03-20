CC 		= gcc
CFLAGS 	= -I. -Wall -Wextra -Werror 

RM		= rm -f
TARGET 	= libmy.a

SRC = 	src/my_is_even.c \
		src/my_putstr.c \
		src/my_strcpy.c \
		src/my_strncmp.c \
		src/my_is_neg.c \
		src/my_strcat.c \
		src/my_strlen.c \
		src/my_strncpy.c \
		src/my_is_odd.c \
		src/my_strcmp.c \
		src/my_strncat.c \
		src/my_swap.c \
		src/my_putchar.c \
		src/my_putnbr.c \
		src/my_getnbr.c \
        src/my_strstr.c \
        src/my_strlowcase.c \
        src/my_strupcase.c \
        src/my_strdup.c \
        src/my_str_to_wordtab.c \
        src/my_nbrlen.c \
        src/my_nbrlen_base.c \
        src/my_putnbr_base.c \
        src/my_getnbr_base.c

OBJ = $(SRC:.c=.o)

.PHONY: all $(TARGET) clean fclean re

all : archive

archive : $(TARGET)
	@echo "Creating $(TARGET)..."
	@ar rc $(TARGET) $(OBJ)
	@ranlib $(TARGET)
	@echo "Done"

$(TARGET): $(OBJ)

src/%.o : src/%.c
	@echo "CC	$<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(TARGET)

re : fclean all
