# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/20 13:26:20 by sg9031            #+#    #+#              #
#    Updated: 2020/12/26 18:22:09 by sg9031           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_memcpy.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
			  ft_strrchr.c ft_strlen.c ft_strlcpy.c ft_strnstr.c\
			  ft_strncmp.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			  ft_isprint.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_memmove.c \
			  ft_memccpy.c ft_memset.c ft_bzero.c ft_memcmp.c ft_memchr.c ft_calloc.c\
			  ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
			  ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
			  ft_putnbr_fd.c 
BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS		= ${SRCS:.c=.o}
BONUS_OBJS	= ${BONUS_SRCS:.c=.o}
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
NAME		= libft.a
RM			= rm -f
.c.o:
			${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs $@ $^

all:		${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJS} ${BONUS_OBJS}
			ar -rcs $(NAME) $^

.PHONY:		all clean fclean re bonus
