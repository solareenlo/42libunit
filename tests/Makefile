# Makefile for philo_one, updated 2021年 5月14日 金曜日 09時56分45秒 JST

SRC := main.c
SRC += create_msg/00_launcher.c create_msg/01_create_msg_basic_test.c div/00_launcher.c div/01_div_basic_test.c div/02_div_zero_test.c is_prime/00_launcher.c is_prime/01_is_prime_basic_test.c is_prime/02_is_prime_bigger_test.c libft/ft_create_msg.c libft/ft_div.c libft/ft_is_prime.c libft/ft_strlen.c strlen/00_launcher.c strlen/01_strlen_ok_test.c strlen/02_strlen_ko_test.c strlen/03_strlen_segv_test.c strlen/04_strlen_buserr_test.c strlen/05_strlen_timeout_test.c

OBJ := main.o
OBJ += create_msg/00_launcher.o create_msg/01_create_msg_basic_test.o div/00_launcher.o div/01_div_basic_test.o div/02_div_zero_test.o is_prime/00_launcher.o is_prime/01_is_prime_basic_test.o is_prime/02_is_prime_bigger_test.o libft/ft_create_msg.o libft/ft_div.o libft/ft_is_prime.o libft/ft_strlen.o strlen/00_launcher.o strlen/01_strlen_ok_test.o strlen/02_strlen_ko_test.o strlen/03_strlen_segv_test.o strlen/04_strlen_buserr_test.o strlen/05_strlen_timeout_test.o

# DO NOT ADD OR MODIFY ANY LINES ABOVE THIS -- run 'make source' to add files

NAME := unit_test
NAME_LIBUNIT := libunit.a

CC := gcc
CFLAGS := -Wall -Wextra -Werror
RM := rm -fr

LIBUNIT_DIR := ../framework
LIBUNIT := $(addprefix $(LIBUNIT_DIR)/, $(NAME_LIBUNIT))

.PHONY:	all
all: $(NAME)

# Linking
$(NAME): $(OBJ) $(LIBUNIT)
	$(CC) $(CFLAGS) -o $@ $^

$(LIBUNIT):
	make -C $(LIBUNIT_DIR)

# Compiling
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: leak
leak: CFLAGS += -g -fsanitize=leak
leak: re

.PHONY: address
address: CFLAGS += -g -fsanitize=address
address: re

.PHONY: test
test: $(NAME)
	./$(NAME) || :

.PHONY: clean
clean:
	$(RM) Makefile.bak $(NAME).dSYM $(OBJ)

.PHONY: fclean
fclean: clean
	make fclean -C $(LIBUNIT_DIR)
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: source
source:
	@mv Makefile Makefile.bak
	@echo "# Makefile for philo_one, updated `date`" >> Makefile
	@echo '' >> Makefile
	@echo SRC := `ls *.c` >> Makefile
	@echo SRC += `ls */*.c` >> Makefile
	@echo '' >> Makefile
	@echo OBJ := `ls *.c | sed s/c$$/o/` >> Makefile
	@echo OBJ += `ls */*.c | sed s/c$$/o/` >> Makefile
	@echo '' >> Makefile
	@sed -n -e '/^# DO NOT ADD OR MODIFY/,$$p' < Makefile.bak >> Makefile
