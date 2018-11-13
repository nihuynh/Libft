# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/18 10:23:16 by sklepper          #+#    #+#              #
#    Updated: 2018/11/13 17:55:26 by nihuynh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a 

NAMEN = ft_printf

SRC = printf.c to_base.c string.c length.c flags.c exceptions_func.c \
      path.c precision.c pick_f_u_int.c pick_f_base.c write_str.c \
      digits_precision.c digits_precision_spec.c pick_f_c.c \
      pick_f_w.c pick_f_s.c pick_f_bigs.c pick_f_percent.c pick_f_p.c pick_f_d.c
      

OBJ = $(SRC:.c=.o) 

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

yo:		$(OBJ)
	gcc $(FLAGS) -fsanitize=address -g -o $(NAMEN) $(OBJ) 
	rm -f $(OBJ)

%.o: %.c
	@gcc -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAMEN)

re: fclean all
