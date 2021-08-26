# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#              #
#    Updated: 2021/08/26 23:19:45 by jduque-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

NAME = libft.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR	= ar rc
RANLIB	= ranlib

# %.o: %.c
#     $(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME) #Inicia la compilacion por defecto.

.PHONY: all bonus clean fclean re #Objetivos falsos.

$(NAME):${OBJS}
		${AR} ${NAME} ${OBJS}
		${RANLIB} ${NAME}

bonus:	${OBJS_BONUS}
		${AR} ${NAME} ${OBJS_BONUS}
		${RANLIB} ${NAME}

clean:
		${RM} $(OBJS) $(OBJS_BONUS)

fclean: clean
		${RM} $(NAME)

re: fclean all #Recomplicacion.