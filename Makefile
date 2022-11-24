# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfolio <rfolio@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 13:07:58 by rfolio            #+#    #+#              #
#    Updated: 2022/11/22 13:25:23 by rfolio           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang

CFLAGS		=	-Wall -Werror -Wextra -I

SRCS		=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_memchr.c ft_isprint.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
				ft_strchr.c ft_strdup.c ft_strlen.c ft_strncmp.c\
				ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_calloc.c ft_strnstr.c ft_strlcpy.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
				ft_putendl_fd.c ft_strjoin.c ft_substr.c ft_strmapi.c ft_itoa.c ft_striteri.c ft_strtrim.c ft_split.c\

OBJS		=	$(SRCS:.c=.o)

BONUS		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
				ft_lstlast.c ft_lstadd_back.c

OBJSBONUS	=	$(BONUS:.c=.o)

RM			=	rm -f

NAME		=	libft.a

HEADER		=	./

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) $(HEADER) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
				$(RM) $(OBJS) $(NAME) $(OBJSBONUS)

re:			fclean all

bonus:		$(OBJS) $(OBJSBONUS)
			ar rcs $(NAME) $(OBJS) $(OBJSBONUS)

.PHONY:		all clean fclean re bonus