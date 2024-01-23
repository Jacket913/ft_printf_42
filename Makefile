# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 16:17:20 by jacket            #+#    #+#              #
#    Updated: 2024/01/23 19:14:39 by gmoulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= cc

CFLAGS		= -Werror -Wextra -Wall

SRC			= ft_printf_utils.c ft_printf.c

INCLUDE		= -I ./ft_printf

OBJ			= $(SRC:.c=.o)

#COLORS
C_GOOD		=	"\033[32mSUCCESS"
C_ORAN		=	"\033[33mCleaning "
C_RED		=	"\033[31mDelete   "
C_WHIT		=	"\033[0m [$(NAME)]"
C_BLUE		=	"\033[34;1mCompiling"

$(NAME) :	$(OBJ)
#				@$(CC) $(CFLAGS) -c $(SRC) $(INCLUDE)
				@ar rcs $(NAME) $(OBJ)
#				@ranlib $(NAME)
#				@echo $(C_BLUE) $(C_WHIT) $(C_GOOD)

all:		$(NAME)

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
				@rm -f $(OBJ)

fclean:	clean
				@rm -f $(NAME)

re: 		fclean all
