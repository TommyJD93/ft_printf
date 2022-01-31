# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 17:11:02 by tterribi          #+#    #+#              #
#    Updated: 2022/01/31 18:41:23 by tterribi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

#LIBFT = ../libft
#LIBFT_LIB = libft.a


SRCS = 	ft_hex_utils.c \
		ft_libft_funcitons.c \
		ft_printf_utils.c \
		ft_printf.c \
		ft_ptr_utils.c \
		ft_uint_utils.c \

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

#INCLUDE = ft_printf.h

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

		ar rcs ${NAME} ${OBJS}
#.c.o:
#		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I$(INCLUDE)

#$(NAME): ${OBJS}
#		make all -C $(LIBFT)/
#		cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
#		ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

