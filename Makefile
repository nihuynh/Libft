# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/30 10:35:40 by nihuynh           #+#    #+#              #
#    Updated: 2019/06/23 14:36:35 by nihuynh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	libft.a
#NAME 	:=	libftprintf.a
# VERBOSE	=	1
RUNMODE	?=  dev
# Sources files :
IO		:=	ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c			   \
			ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c			   \
			ft_puttab.c ft_print_value.c ft_fopen_read.c ft_putnbr_base.c	   \
			ft_putnbr_base_low.c
STRING	:=	ft_str_is_alpha.c ft_str_is_lowercase.c ft_str_is_numeric.c		   \
			ft_str_is_printable.c ft_str_is_uppercase.c ft_strcapitalize.c	   \
			ft_strcasecmp.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c	   \
			ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c	   \
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c   \
			ft_strlowcase.c ft_strmap.c ft_strmapi.c ft_strncasecmp.c		   \
			ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strndup.c ft_strnequ.c   \
			ft_strnew.c ft_strnstr.c ft_strcasestr.c ft_strrchr.c 			   \
			ft_strsplit.c ft_strstr.c ft_strclen.c ft_strsub.c ft_strtrim.c    \
			ft_strupcase.c ft_strpbrk.c ft_strsubfree.c ft_strjoinfree.c	   \
			ft_wordcount.c ft_strjoini.c
MEM		:=	ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c	   \
			ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_memrcpy.c	   \
			ft_safe_alloc.c ft_print_memory.c ft_memdup.c
MATH	:=	ft_abs.c ft_absf.c ft_min.c ft_max.c ft_btw.c ft_clamp.c		   \
			ft_clampf.c ft_maxf.c ft_minf.c ft_btwf.c
LIST	:=	ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c	   \
			ft_lstnew.c ft_lstrev.c ft_lstlen.c  ft_lstaddbk.c ft_lstlast.c	   \
			ft_lstat.c ft_lstget.c ft_lstiteri.c ft_lstpushnew.c			   \
			ft_lstiter_arg.c ft_lstgetnode.c ft_lstpop.c ft_lstsort.c		   \
			ft_lstswap.c ft_lstaddendnew.c ft_lstmoveup.c ft_lstgetidx.c	   \
			ft_lstmovedown.c
CTYPE	:=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c ft_iscntrl.c   \
			ft_isdigit.c ft_isgraph.c ft_islower.c ft_isprint.c ft_isspace.c   \
			ft_isupper.c ft_isxdigit.c ft_isnumber.c
CONVERT	:=	ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c ft_itoa_base.c	   \
			ft_atoi_base.c ft_dtoa.c ft_lltoa.c ft_atof.c ft_lltoa_base.c
PRINTF	:=	ft_printf_conv1.c ft_printf_conv2.c ft_printf_prec1.c ft_printf.c
BTREE	:=	ft_b3add_left.c	 ft_b3add_right.c ft_b3new.c ft_b3del.c			   \
			ft_b3apply_prefix.c ft_b3apply_infix.c ft_b3apply_suffix.c
OTHERS	:=	ft_gnl.c ft_tablen.c ft_putctab.c ft_error.c ft_swap.c ft_tabdel.c \
			ft_swapf.c ft_curr_usec.c ft_line_count.c ft_lstgetelt.c 		   \
			ft_options.c lifetime.c
SRC		:=	$(IO) $(STRING) $(MEM) $(MATH) $(LIST) $(CTYPE) $(CONVERT) 		   \
			$(OTHERS) $(PRINTF) $(BTREE)
# directories :
VPATH	:=	./srcs ./srcs/convert ./srcs/ctype ./srcs/io ./srcs/list		   \
			./srcs/math ./srcs/memory ./srcs/printf ./srcs/string ./srcs/btree
# **************************************************************************** #
# Makefile dependency :
include mk_c_project.mk
# **************************************************************************** #
ASCIIART:=	"\033[1;36m\033[19G_ _                       _       _ _ _      __ \
_\033[0m\n\033[1;36m\033[18G(_) |                     | |     | (_) |    / _| |\
\033[0m\n\033[1;33m\033[12G _ __  _| |__  _   _ _   _ _ __ | |__   | |_| |__ | \
|_| |_\033[0m\n\033[1;31m\033[12G| '_ \\| | '_ \\| | | | | | | '_ \\| '_ \\  | \
| | '_ \\|  _| __|\033[0m\n\033[1;35m\033[12G| | | | | | | | |_| | |_| | | | | \
| | | | | | |_) | | | |_\033[0m\n\033[1;34m\033[12G|_| |_|_|_| |_|\\__,_|\\__, \
|_| |_|_| |_| |_|_|_.__/|_|  \\__|\033[0m\n\033[1;36m\033[33G __/ |\033[0m\n\
\033[1;36m\033[33G|___/\033[0m\n"
# **************************************************************************** #
# Rules :
all: $(NAME)
.PHONY: all

$(NAME): $(OBJ)
	ar rc $@ $(OBJ) && ranlib $@
	@printf "\n\033[1;34m$@\033[25G\033[32mBuilt $@ $(OKLOGO)"
	@printf $(ASCIIART)
-include $(DEP)

fclean: clean
	$(RM) $(NAME)
	$(RM) UT_printf.out UT_lib.out
	@printf "\033[1;34m$(NAME)\033[25G\033[31mCleaning $(NAME) $(OKLOGO)"
.PHONY: fclean

run: all
	$(CC) $(CFLAGS) main.c -o UT_lib.out $(INC) $(NAME)
	./UT_lib.out "Les doritos sont merveilleux"
.PHONY: run

runprintf: all
	$(CC) $(CFLAGS) -o UT_printf.out printf_main.c -I includes libft.a
	./UT_printf.out
.PHONY: runprintf

norme:
	norminette srcs includes | $(GREP_ERR)
	@printf "\033[1;34m$(NAME)\033[25G\033[31mNorminette $(OKLOGO)"
.PHONY: norme
