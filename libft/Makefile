# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 13:56:14 by enrgonza          #+#    #+#              #
#    Updated: 2023/02/22 14:01:11 by enrgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_memset ft_bzero ft_strlen ft_isalpha ft_isdigit ft_isalnum \
			  ft_isascii ft_isprint ft_toupper ft_tolower ft_strchr ft_atoi \
			  ft_putchar_fd ft_calloc ft_strlcpy ft_strlcat ft_strrchr \
			  ft_strncmp ft_memchr ft_memcpy ft_memcmp ft_memmove ft_strdup \
			  ft_strnstr ft_substr ft_strjoin ft_itoa ft_strmapi ft_striteri \
			  ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_strtrim ft_split

B_SRC		= ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
			  ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRCS		= $(addsuffix .c, ${SRC})

B_SRCS		= $(addsuffix _bonus.c, ${B_SRC})

OBJS		= $(SRCS:.c=.o)

B_OBJS		= $(B_SRCS:.c=.o)

NAME		= libft.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib
HEADER		= libft.h

CFLAGS		= -Wall -Wextra -Werror

%.o : %.c $(HEADER)
			${CC} ${CFLAGS} -I $(HEADER) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER)
			$(AR) $(NAME) $(OBJS)
			$(RN) $(NAME)

bonus:		$(B_OBJS)
			$(AR) $(NAME) $(B_OBJS)
			$(RN) $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(B_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re

