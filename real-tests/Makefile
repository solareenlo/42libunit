# Makefile for philo_one, updated Mon May 10 19:18:03 JST 2021

SRC := main.c
SRC += atoi/00_launcher.c atoi/01_atoi_basic.c atoi/02_atoi_space.c atoi/03_atoi_spaces.c atoi/04_atoi_sign.c atoi/05_atoi_signs.c atoi/06_atoi_int_max.c atoi/07_atoi_int_min.c atoi/08_atoi_long_max.c atoi/09_atoi_long_min.c atoi/10_atoi_zero_zero.c atoi/11_atoi_null_term.c atoi/12_atoi_null.c bzero/00_launcher.c bzero/01_bzero_basic.c calloc/00_launcher.c calloc/01_calloc_basic.c isalnum/00_launcher.c isalnum/01_isalnum_basic.c isalnum/02_isalnum_mod_256.c libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c libft/ft_isspace.c libft/ft_itoa.c libft/ft_lstadd_back.c libft/ft_lstadd_front.c libft/ft_lstclear.c libft/ft_lstdelone.c libft/ft_lstiter.c libft/ft_lstlast.c libft/ft_lstmap.c libft/ft_lstnew.c libft/ft_lstsize.c libft/ft_memccpy.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c memset/00_launcher.c memset/01_memset_basic.c strchr/00_launcher.c strchr/01_strchr_basic.c

OBJ := main.o
OBJ += atoi/00_launcher.o atoi/01_atoi_basic.o atoi/02_atoi_space.o atoi/03_atoi_spaces.o atoi/04_atoi_sign.o atoi/05_atoi_signs.o atoi/06_atoi_int_max.o atoi/07_atoi_int_min.o atoi/08_atoi_long_max.o atoi/09_atoi_long_min.o atoi/10_atoi_zero_zero.o atoi/11_atoi_null_term.o atoi/12_atoi_null.o bzero/00_launcher.o bzero/01_bzero_basic.o calloc/00_launcher.o calloc/01_calloc_basic.o isalnum/00_launcher.o isalnum/01_isalnum_basic.o isalnum/02_isalnum_mod_256.o libft/ft_atoi.o libft/ft_bzero.o libft/ft_calloc.o libft/ft_isalnum.o libft/ft_isalpha.o libft/ft_isascii.o libft/ft_isdigit.o libft/ft_isprint.o libft/ft_isspace.o libft/ft_itoa.o libft/ft_lstadd_back.o libft/ft_lstadd_front.o libft/ft_lstclear.o libft/ft_lstdelone.o libft/ft_lstiter.o libft/ft_lstlast.o libft/ft_lstmap.o libft/ft_lstnew.o libft/ft_lstsize.o libft/ft_memccpy.o libft/ft_memchr.o libft/ft_memcmp.o libft/ft_memcpy.o libft/ft_memmove.o libft/ft_memset.o libft/ft_putchar_fd.o libft/ft_putendl_fd.o libft/ft_putnbr_fd.o libft/ft_putstr_fd.o libft/ft_split.o libft/ft_strchr.o libft/ft_strdup.o libft/ft_strjoin.o libft/ft_strlcat.o libft/ft_strlcpy.o libft/ft_strlen.o libft/ft_strmapi.o libft/ft_strncmp.o libft/ft_strnstr.o libft/ft_strrchr.o libft/ft_strtrim.o libft/ft_substr.o libft/ft_tolower.o libft/ft_toupper.o memset/00_launcher.o memset/01_memset_basic.o strchr/00_launcher.o strchr/01_strchr_basic.o

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
	./$(NAME)

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
