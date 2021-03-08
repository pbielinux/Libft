CC = gcc
NAME = libft.a
FLAGS += -g -Wall -Wextra -Werror

SRC_DIR 	= srcs/

HEADERS 	= ./includes

SRC = $(SRC_DIR)ft_putchar_fd.c \
		$(SRC_DIR)ft_putendl_fd.c \
		$(SRC_DIR)ft_putnbr_fd.c \
		$(SRC_DIR)ft_putstr_fd.c \
		$(SRC_DIR)ft_bzero.c \
		$(SRC_DIR)ft_calloc.c \
		$(SRC_DIR)ft_memccpy.c \
		$(SRC_DIR)ft_memchr.c \
		$(SRC_DIR)ft_memcmp.c \
		$(SRC_DIR)ft_memcpy.c \
		$(SRC_DIR)ft_memset.c \
		$(SRC_DIR)ft_memmove.c \
		$(SRC_DIR)ft_atoi.c \
		$(SRC_DIR)ft_itoa.c \
		$(SRC_DIR)ft_putnbr.c \
		$(SRC_DIR)ft_putchar.c \
		$(SRC_DIR)ft_putendl.c \
		$(SRC_DIR)ft_putstr.c \
		$(SRC_DIR)ft_split.c \
		$(SRC_DIR)ft_strchr.c \
		$(SRC_DIR)ft_strcpy.c \
		$(SRC_DIR)ft_strdup.c \
		$(SRC_DIR)ft_strjoin.c \
		$(SRC_DIR)ft_strlcat.c \
		$(SRC_DIR)ft_strlcpy.c \
		$(SRC_DIR)ft_strlen.c \
		$(SRC_DIR)ft_strmap.c \
		$(SRC_DIR)ft_strmapi.c \
		$(SRC_DIR)ft_strncmp.c \
		$(SRC_DIR)ft_strndup.c \
		$(SRC_DIR)ft_strnlen.c \
		$(SRC_DIR)ft_strnstr.c \
		$(SRC_DIR)ft_strrchr.c \
		$(SRC_DIR)ft_strstr.c \
		$(SRC_DIR)ft_strtrim.c \
		$(SRC_DIR)ft_substr.c \
		$(SRC_DIR)ft_isalnum.c \
		$(SRC_DIR)ft_isalpha.c \
		$(SRC_DIR)ft_isascii.c \
		$(SRC_DIR)ft_isdigit.c \
		$(SRC_DIR)ft_isprint.c \
		$(SRC_DIR)ft_isspace.c \
		$(SRC_DIR)ft_tolower.c \
		$(SRC_DIR)ft_toupper.c \
		$(SRC_DIR)ft_wrdcnt.c \
		$(SRC_DIR)ft_counter.c \

SRC_B = $(SRC_DIR)ft_lstnew.c \
		$(SRC_DIR)ft_lstadd_front.c \
		$(SRC_DIR)ft_lstsize.c \
		$(SRC_DIR)ft_lstlast.c \
		$(SRC_DIR)ft_lstadd_back.c \
		$(SRC_DIR)ft_lstdelone.c \
		$(SRC_DIR)ft_lstclear.c \
		$(SRC_DIR)ft_lstiter.c \
		$(SRC_DIR)ft_lstmap.c \


OBJ += $(SRC:.c=.o)

OBJ_B += $(SRC_B:.c=.o)

BUILD_PRINT = @echo "\033[1;96m		    [LIBFT] \033[0;32mBuilding $<\033[1;92m"
DONE = @cat ./graphic_assets/done
CLEAN_O = @echo "\033[38;5;246mObject files removed! [LIBFT]\033[0m"
CLEAN_A = @echo "\033[38;5;246mExecutable removed! [LIBFT]\033[0m"


all: logo $(NAME)

$(OBJ): %.o: %.c
	$(BUILD_PRINT)
	@$(CC) $(FLAGS) -I $(HEADERS) -c $< -o $@

$(OBJ_B): %.o: %.c
	$(BUILD_PRINT)
	@$(CC) $(FLAGS) -I $(HEADERS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	$(DONE)

bonus: logo $(OBJ) $(OBJ_B)
	@ar rcs $(NAME) $(OBJ) $(OBJ_B)
	$(DONE)

clean:
	@rm -rf $(OBJ) $(OBJ_B)
	$(CLEAN_O)

fclean: clean
	@rm -rf $(NAME)
	$(CLEAN_A)

re: fclean all

rebonus: fclean bonus

logo:
	@echo "\033[1;32m"
	@cat ./graphic_assets/logo

.PHONY: all bonus clean fclean re rebonus logo
