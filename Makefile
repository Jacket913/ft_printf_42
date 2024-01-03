# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacket <jacket@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 16:17:20 by jacket            #+#    #+#              #
#    Updated: 2024/01/03 16:31:15 by jacket           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= cc

CFLAGS		= -Werror -Wextra -Wall

SRC			=

BONUS		=

INCLUDE		= -I ./ft_printf

OBJ			= $(SRC:.c=.o)

BONUS_OBJ	= $(BONUS:.c=.o)

#COLORS
C_GOOD		=	"\033[32mSUCCESS"
C_ORAN		=	"\033[33mCleaning "
C_RED		=	"\033[31mDelete   "
C_WHIT		=	"\033[0m [$(NAME)]"
C_BLUE		=	"\033[34;1mCompiling"

$(NAME) :	$(OBJ)
				@$(CC) $(CFLAGS) -c $(SRC) $(INCLUDE)
				@ar rc $(NAME) $(OBJ)
				@ranlib $(NAME)
				@echo $(C_BLUE) $(C_WHIT) $(C_GOOD)

all:		$(NAME)

bonus:		$(BONUS_OBJ)
				@$(CC) $(CFLAGS) -c $(BONUS) $(INCLUDE)
				@ar rc $(NAME) $(BONUS_OBJ)
				@ranlib $(NAME)
				@echo $(C_BLUE) $(C_WHIT) $(C_GOOD)

clean:
				@rm -f $(OBJ) $(BONUS_OBJ)

fclean:	clean
				@rm -f $(NAME)

re: 		fclean all
