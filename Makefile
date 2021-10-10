# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 16:47:43 by trofidal          #+#    #+#              #
#    Updated: 2021/10/10 10:29:07 by trofidal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##################### 			D E F I N E				#####################
CC			= clang++
CFLAGS		= -g3 -ldl -std=c++11 -I utils/ -I$(PATH_LIBFT) 
PATH_LIBFT	= ../
VALGRIND	= valgrind --leak-check=full -s
TESTER_PATH	= srcs/
FOR_ALL		= $(addprefix common/, infos.cpp sig_handler.cpp tripouille_leaks.cpp)

#####################	M A N D A T O R Y	T E S T S	#####################
BASIC_TEST	=	isalpha isdigit isalnum isascii isprint \
				strlen memset bzero memcpy memmove strlcpy \
				strlcat toupper tolower strchr strrchr strncmp \
				memchr memcmp strnstr atoi calloc strdup \
				substr #strjoin strtrim split itoa strmapi \
				striteri putchar_fd putstr_fd putendl_fd \
				putnbr_fd
##################### 		B O N U S	T E S T S		#####################
BONUS_TEST	=	lstnew lstadd_front lstsize \
				lstlast lstadd_back lstdelone \
				lstclear lstiter lstmap

$(BASIC_TEST): %: base_start
	@$(CC) $(CFLAGS) $(FOR_ALL) $(TESTER_PATH)$*.cpp -L$(PATH_LIBFT) -lft && ./a.out && rm -rf a.out*

$(BONUS):
	@echo pas fait

base_start:
	@echo Making Libft
	@make -C $(PATH_LIBFT)
	

base_test:
	make -C $(PATH_LIBFT)

base: $(BASIC_TEST)

bonus: $(BONUS) 

all: base bonus

clean:
	make clean -C $(PATH_LIBFT) && rm -f a.out libft.a
fclean:
	make fclean -C $(PATH_LIBFT) && rm -f a.out libft.a

.PHONY: base_start base_test base bonus all clean fclean