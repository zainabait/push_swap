# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 14:30:43 by zait-bel          #+#    #+#              #
#    Updated: 2024/05/13 17:51:36 by zait-bel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ./mandatory/push_swap.c ./mandatory/ft_split.c ./mandatory/ft_utils2.c ./mandatory/ft_utils.c ./mandatory/ft_operation.c ./mandatory/ft_operation2.c ./mandatory/ft_sort.c ./mandatory/ft_lst.c

SRCBONUS = ./bonus/push_swap_bonus.c ./bonus/ft_utils2_bonus.c ./bonus/ft_utils_bonus.c ./bonus/ft_split_bonus.c ./bonus/ft_lst_bonus.c ./bonus/get_next_line_bonus.c ./bonus/get_next_line_utils_bonus.c ./bonus/ft_operation_bonus.c ./bonus/ft_operation2_bonus.c ./bonus/ft_sort_bonus.c


OBJS = $(SRC:.c=.o)
OBJB = $(SRCBONUS:.c=.o)


NAME = push_swap
BONUS = checker

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus : $(OBJB)
	$(CC) $(CFLAGS) $(OBJB) -o $(BONUS)

./mandatory/%.o: ./mandatory/%.c ./mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

./bonus/%.o: ./bonus/%.c ./bonus/push_swap_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJB)

fclean: clean
	rm -f $(NAME) $(BONUS)

re:	fclean all

.PHONY: clean 