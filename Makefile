# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 16:47:43 by trofidal          #+#    #+#              #
#    Updated: 2021/10/16 02:32:03 by trofidal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT=base

##################### 			D E F I N E				#####################
CC					= clang++
CFLAGS				= -g3 -ldl -std=c++11 -I utils/ -I$(PATH_LIBFT) 
PATH_LIBFT			= ../
TESTER_PATH			= srcs/
TESTER_PATH_BONUS	= srcs/bonus/
FOR_ALL				= $(addprefix common/, infos.cpp sig_handler.cpp tripouille_leaks.cpp free_tabs.cpp)

#####################	M A N D A T O R Y	T E S T S	#####################
BASIC_TEST	=	isalpha isdigit isalnum isascii isprint \
				strlen memset bzero memcpy memmove strlcpy \
				strlcat toupper tolower strchr strrchr strncmp \
				memchr memcmp strnstr atoi calloc strdup \
				substr strjoin strtrim split itoa strmapi \
				striteri putchar_fd putstr_fd putendl_fd \
				putnbr_fd
##################### 		B O N U S	T E S T S		#####################
BONUS_TEST	=	lstnew lstadd_front lstsize \
				lstlast lstadd_back #lstdelone \
				lstclear lstiter lstmap

NULL_TEST = z_NULL.cpp

$(BASIC_TEST): %: base_start
	@$(CC) $(CFLAGS) $(FOR_ALL) $(TESTER_PATH)$*.cpp -L$(PATH_LIBFT) -lft && ./a.out && rm -rf a.out*

$(BONUS_TEST): %: bonus_base
	@$(CC) $(CFLAGS) $(FOR_ALL) $(TESTER_PATH_BONUS)$*.cpp -L$(PATH_LIBFT) -lft && ./a.out && rm -rf a.out*

base_start:
	@echo Making Libft
	@rm -f libft.a
	@echo B A S E _ T E S T S _ W I T H O U T _ B O N U S E S
	@make -C $(PATH_LIBFT)
	
null:
	@make -C $(PATH_LIBFT)
	@$(CC) $(CFLAGS) $(FOR_ALL) $(TESTER_PATH)$(NULL_TEST) -L$(PATH_LIBFT) -lft && ./a.out && rm -rf a.out*

base_test:
	make -C $(PATH_LIBFT)

base: $(BASIC_TEST)

bonus_base:
	@echo Making Libft
	@echo B O N U S _ T E S T S _ O N L Y
	@make bonus -C $(PATH_LIBFT)

bonus: $(BONUS_TEST)

all: base bonus

help:
	@printf "Available commands are :\n"
	@printf "make base\n"
	@printf "Make every mandatory tests\n"
	@printf "make function\n"
	@printf "Make the targeted function (make atoi) will make only atoi tests\n"
	@printf "make bonus\n"
	@printf "Will only make bonus tests\n"
	@printf "make all\n"
	@printf "Will make every tests, mandatory and bonus\n"
	@printf "make null\n"
	@printf "Will make only null parameters tests, usefull to protect your libft functions.\n"
	
clean:
	make clean -C $(PATH_LIBFT) && rm -f a.out libft.a
fclean:
	make fclean -C $(PATH_LIBFT) && rm -f a.out libft.a

.PHONY: base_start base_test base bonus all clean fclean

