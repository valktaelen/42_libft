# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 20:38:51 by aartiges          #+#    #+#              #
#    Updated: 2022/10/04 01:17:44 by aartiges         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

################################################################################
##                               Présentation                                 ##
################################################################################

COLOR_NORM		=	\033[0m
COLOR_RED		=	\033[31m
COLOR_PURPLE	=	\033[35m

############

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_isspace.c

OBJS = ${SRCS:.c=.o}

SRCSBONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJSBONUS	= ${SRCSBONUS:.c=.o}

HEADERS =	libft.h

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBC = ar
LIBF = rcs

%.o : %.c  $(HEADERS) Makefile
	@printf "\r\033[K\tCompilation of $(COLOR_PURPLE)$< ==> $@\$(COLOR_NORM)"
	@${CC} ${CFLAGS} -c $< -o $@ 

all: 		${NAME}

$(NAME):	$(OBJS)
			@printf "\r\033[K\tCreation of $(COLOR_PURPLE)$@\$(COLOR_NORM)\n"
			@$(LIBC) $(LIBF) $(NAME) $(OBJS)

bonus: ${OBJS} ${OBJSBONUS}
			@echo
			@echo 'Compilation of libft'
			@$(LIBC) $(LIBF) ${NAME} ${OBJS} ${OBJSBONUS}

clean:
			@${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
			@${RM} ${NAME}

re: fclean all
