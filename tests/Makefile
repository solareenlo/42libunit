# Makefile for philo_one, updated Sun May  9 17:53:09 JST 2021

SRC := main.c
SRC += libft/ft_strlen.c strlen/00_launcher.c strlen/01_strlen_ok_test.c strlen/02_strlen_ko_test.c strlen/03_strlen_segv_test.c strlen/04_strlen_buserr_test.c strlen/05_strlen_timeout_test.c

OBJ := main.o
OBJ += libft/ft_strlen.o strlen/00_launcher.o strlen/01_strlen_ok_test.o strlen/02_strlen_ko_test.o strlen/03_strlen_segv_test.o strlen/04_strlen_buserr_test.o strlen/05_strlen_timeout_test.o

# DO NOT ADD OR MODIFY ANY LINES ABOVE THIS -- run 'make source' to add files

NAME := unit_test
NAME_LIBUNIT := libunit.a

CC := gcc
CFLAGS := -Wall -Wextra -Werror -g -fsanitize=address
RM := rm -fr

LIBUNIT_DIR := ../framework
LIBUNIT := $(addprefix $(LIBUNIT_DIR)/, $(NAME_LIBUNIT))

.PHONY:	all
all: $(NAME)

# Linking
$(NAME): $(LIBUNIT) $(OBJ)
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
