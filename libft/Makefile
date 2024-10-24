# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 14:24:10 by jaimesan          #+#    #+#              #
#    Updated: 2024/10/23 16:15:13 by jaimesan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC	= cc

FLAGS = -Wall -Wextra -Werror -I ../includes
FLAGS_GNL = -Wall -Wextra -Werror -I ../../includes

AR = ar rcs

RM	= rm -rf

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c \
		ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c \
		ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

GNL = ./get_next_line/get_next_line.c ./get_next_line/get_next_line_utils.c ./get_next_line/get_next_line_utils.c \
		./get_next_line/get_next_line_bonus.c ./get_next_line/get_next_line_utils_bonus.c \
		./get_next_line/get_next_line_utils_bonus.c

OBJS		= $(FILES:.c=.o)
OBJS_GNL	= $(GNL:.c=.o)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS) $(OBJS_GNL)
		$(AR) $(NAME) $(OBJS) $(OBJS_GNL)

all:	${NAME}

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_GNL)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS_GNL)

re: fclean all

.PHONY:	all clean fclean re

.SILENT: