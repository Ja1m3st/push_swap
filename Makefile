# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 15:38:06 by jaimesan          #+#    #+#              #
#    Updated: 2024/10/24 13:18:01 by jaimesan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./includes
AR = ar rcs
RM	= rm -rf

GREEN := \033[0;32m
RED := \033[0;31m
RESET := \033[0m

# Archivos fuente
SRCS =	./srcs/core/main.c ./srcs/core/ft_main_program.c ./srcs/utils/push_swap_utils.c ./srcs/moves/push_swap_swap.c ./srcs/moves/push_swap_rotate.c \
		./srcs/moves/push_swap_push.c ./srcs/moves/push_swap_reverse_rotate.c ./srcs/sorts/ft_sort_five.c \
		./srcs/sorts/ft_sort_three.c ./srcs/utils/push_swap_utils_two.c ./srcs/sorts/ft_sort_four.c \
		./srcs/utils/push_swap_utils_three.c ./srcs/sorts/ft_sort_more.c

BONUS = ./bonus/push_swap_bonus.c ./bonus/print_list_bonus.c ./bonus/check_arguments_bonus.c ./bonus/moves/push_swap_swap_bonus.c \
		./bonus/moves/push_swap_push_bonus.c ./bonus/moves/push_swap_reverse_rotate_bonus.c ./bonus/moves/push_swap_rotate_bonus.c \
		./bonus/utils/push_swap_bonus_utils.c

# Archivos objeto
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)

# Directorio de la libft
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

FT_PRINTF_DIR = $(LIBFT_DIR)/ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

MAKEFLAGS = --no-print-directory

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)

$(NAME): $(OBJS) $(FT_PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FT_PRINTF) $(LIBFT) 
	@echo "$(GREEN)Compilation successful!$(RESET)"

bonus: $(NAME) $(OBJS_BONUS) $(FT_PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJS_BONUS) $(FT_PRINTF) $(LIBFT)
	@echo "$(GREEN)Bonus compilation successful!$(RESET)"

clean:
	$(MAKE) clean -C $(FT_PRINTF_DIR)
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS) $(OBJS_BONUS)
	@echo "$(RED)Cleaning up exept compilers ..$(RESET)"

fclean:
	$(MAKE) fclean -C $(FT_PRINTF_DIR)
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(OBJS) $(OBJS_BONUS)
	$(RM) $(NAME) $(NAME_BONUS)
	@echo "$(RED)Cleaning up...$(RESET)"

re: fclean all bonus

.PHONY:	all clean fclean re bonus

.SILENT: