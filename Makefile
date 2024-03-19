# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsandrin <nsandrin@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 12:51:24 by nsandrin          #+#    #+#              #
#    Updated: 2024/03/11 13:04:02 by nsandrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE =	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_isascii.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

BSRC =		ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

HEADER = libft.h

NAME = libft.a

OBJECT = $(SOURCE:.c=.o)

BOBJ = $(BSRC:.c=.o)

CC = cc

CFLAG = -Wall -Wextra -Werror

AR = ar rcs

REMOVE = rm -f

all: $(NAME)

bonus: $(BOBJ)
	$(AR) $(NAME) $(BOBJ)

.c.o:
	$(CC) $(CFLAG) -I $(HEADER) -c $< -o $(<:.c=.o)

$(NAME): $(OBJECT)
	$(AR) $(NAME) $(OBJECT)

clean:
	$(REMOVE) $(OBJECT) 
	$(REMOVE) $(BOBJ)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus