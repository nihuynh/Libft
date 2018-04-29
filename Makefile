# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/30 10:35:40 by nihuynh           #+#    #+#              #
#    Updated: 2018/04/25 00:21:37 by nihuynh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	:=	libft.a
# directories :
SRCDIR	:=	srcs
OBJDIR	:=	objs
INCDIR	:=	includes
# Sources files :
IO		:=	ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c \
			ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
			ft_puttab.c ft_print_value.c
STRING	:=	ft_str_is_alpha.c ft_str_is_lowercase.c ft_str_is_numeric.c \
			ft_str_is_printable.c ft_str_is_uppercase.c ft_strcapitalize.c \
			ft_strcasecmp.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
			ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
			ft_strlowcase.c ft_strmap.c ft_strmapi.c ft_strncasecmp.c \
			ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strndup.c ft_strnequ.c \
			ft_strnew.c ft_strnstr.c ft_strcasestr.c ft_strrchr.c \
			ft_strsplit.c ft_strstr.c ft_strclen.c ft_strsub.c ft_strtrim.c \
			ft_strupcase.c ft_strpbrk.c ft_strsubfree.c ft_strjoinfree.c \
			ft_strnchr.c
MEM		:=	ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_memrcpy.c
MATH	:=	ft_abs.c ft_min.c ft_max.c ft_btw.c
LIST	:=	ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
			ft_lstnew.c ft_lstrev.c ft_lstlen.c  ft_lstaddbk.c ft_lstlast.c \
			ft_lstat.c ft_strlstsplit.c ft_lstget.c
CTYPE	:=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c ft_iscntrl.c \
			ft_isdigit.c ft_isgraph.c ft_islower.c ft_isprint.c ft_isspace.c \
			ft_isupper.c ft_isxdigit.c
CONVERT	:=	ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c ft_itoa_base.c \
			ft_atoi_base.c
OTHERS	:=	ft_gnl.c ft_tablen.c ft_putctab.c ft_tabdel.c
# Headers files :
HEADERS	:=	ftconvert.h ftctype.h ftio.h ftlist.h ftmath.h ftmem.h ftstring.h \
			libft.h ftgnl.h
# **************************************************************************** #
SRC		:=	$(IO) $(STRING) $(MEM) $(MATH) $(LIST) $(CTYPE) $(CONVERT) $(OTHERS)
OBJ		:=	$(addprefix $(OBJDIR)/, $(SRC:.c=.o))
HEAD	:=	$(addprefix $(INCDIR)/, $(HEADERS))
CC		:=	clang
CFLAGS	:= 	-Werror -Wall -Wextra -I$(INCDIR)
RM		:=	/bin/rm -f
# **************************************************************************** #
ASCIIART:=	"\033[1;36m\033[19G_ _                       _       _ _ _      __ \
_\033[0m\n\033[1;36m\033[18G(_) |                     | |     | (_) |    / _| |\
\033[0m\n\033[1;33m\033[12G _ __  _| |__  _   _ _   _ _ __ | |__   | |_| |__ | \
|_| |_\033[0m\n\033[1;31m\033[12G| '_ \\| | '_ \\| | | | | | | '_ \\| '_ \\  | \
| | '_ \\|  _| __|\033[0m\n\033[1;35m\033[12G| | | | | | | | |_| | |_| | | | | \
| | | | | | |_) | | | |_\033[0m\n\033[1;34m\033[12G|_| |_|_|_| |_|\\__,_|\\__, \
|_| |_|_| |_| |_|_|_.__/|_|  \\__|\033[0m\n\033[1;36m\033[33G __/ |\033[0m\n\
\033[1;36m\033[33G|___/\033[0m\n"
OKLOGO	:=	\033[80G\033[32m[OK]\033[0m\n
# **************************************************************************** #
# Rules :
all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	@libtool -static -o $@ $(OBJ)
	@ranlib $@
	@printf "\n\033[1;34mLibft\033[25G\033[32mBuilt $@ $(OKLOGO)"
	@printf $(ASCIIART)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir $(OBJDIR) 2> /dev/null || true
	@$(CC) $(CFLAGS) -c -o $@ $<
	@printf "\033[1;34mLibft\033[25G\033[33mCompile $< $(OKLOGO)"

clean:
	@$(RM) $(OBJ)
	@rmdir $(OBJDIR) 2> /dev/null || true
	@printf "\033[1;34mLibft\033[25G\033[31mCleaning objs $(OKLOGO)"

fclean: clean
	@$(RM) $(NAME)
	@printf "\033[1;34mLibft\033[25G\033[31mCleaning $(NAME) $(OKLOGO)"

git: clean
	@git add -A
	@printf "\033[1;34mLibft\033[25G\033[31mGit sync $(OKLOGO)"
	@git status

re: fclean all

.PHONY:all, $(NAME), clean fclean, git, re
