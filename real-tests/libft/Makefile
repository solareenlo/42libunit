# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/23 22:55:28 by tayamamo          #+#    #+#              #
#    Updated: 2021/05/10 11:48:46 by tayamamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB		= ar -rcs
RM		= rm -f

INCLUDE	= .
SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
		  ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		  ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
		  ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
		  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		  ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
		  ft_putendl_fd.c ft_putnbr_fd.c ft_isspace.c
SRCS	+= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		  ft_lstiter.c ft_lstmap.c
OBJS	= ${SRCS:.c=.o}
BONUS_S	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		  ft_lstiter.c ft_lstmap.c
BONUS_O	= ${BONUS_S:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	${LIB} $@ $^

bonus:	${NAME}	${BONUS_O}
	${LIB} $^

all:	${NAME}

clean:
	${RM} ${OBJS} ${BONUS_O}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

rebonus:	fclean bonus

.PHONY:	all clean fclean re bonus rebonus
