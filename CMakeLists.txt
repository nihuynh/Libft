cmake_minimum_required(VERSION 3.13)
project(ft C)

add_library(ft "")

target_include_directories(ft PUBLIC includes)

target_sources(ft PRIVATE
        srcs/ft_abs.c
        srcs/ft_absf.c
        srcs/ft_atof.c
        srcs/ft_atoi.c
        srcs/ft_atoi_base.c
        srcs/ft_btw.c
        srcs/ft_bzero.c
        srcs/ft_clamp.c
        srcs/ft_clampf.c
        srcs/ft_dtoa.c
        srcs/ft_error.c
        srcs/ft_fopen_read.c
        srcs/ft_gnl.c
        srcs/ft_isalnum.c
        srcs/ft_isalpha.c
        srcs/ft_isascii.c
        srcs/ft_isblank.c
        srcs/ft_iscntrl.c
        srcs/ft_isdigit.c
        srcs/ft_isgraph.c
        srcs/ft_islower.c
        srcs/ft_isnumber.c
        srcs/ft_isprint.c
        srcs/ft_isspace.c
        srcs/ft_isupper.c
        srcs/ft_isxdigit.c
        srcs/ft_itoa.c
        srcs/ft_itoa_base.c
        srcs/ft_lltoa.c
        srcs/ft_lltoa_base.c
        srcs/ft_lstadd.c
        srcs/ft_lstaddbk.c
        srcs/ft_lstat.c
        srcs/ft_lstdel.c
        srcs/ft_lstdelone.c
        srcs/ft_lstget.c
        srcs/ft_lstiter.c
        srcs/ft_lstlast.c
        srcs/ft_lstlen.c
        srcs/ft_lstmap.c
        srcs/ft_lstnew.c
        srcs/ft_lstrev.c
        srcs/ft_max.c
        srcs/ft_memalloc.c
        srcs/ft_memccpy.c
        srcs/ft_memchr.c
        srcs/ft_memcmp.c
        srcs/ft_memcpy.c
        srcs/ft_memdel.c
        srcs/ft_memmove.c
        srcs/ft_memrcpy.c
        srcs/ft_memset.c
        srcs/ft_min.c
        srcs/ft_print_memory.c
        srcs/ft_print_value.c
        srcs/ft_printf.c
        srcs/ft_printf_conv1.c
        srcs/ft_printf_conv2.c
        srcs/ft_printf_prec1.c
        srcs/ft_putchar.c
        srcs/ft_putchar_fd.c
        srcs/ft_putctab.c
        srcs/ft_putendl.c
        srcs/ft_putendl_fd.c
        srcs/ft_putnbr.c
        srcs/ft_putnbr_base.c
        srcs/ft_putnbr_base_low.c
        srcs/ft_putnbr_fd.c
        srcs/ft_putstr.c
        srcs/ft_putstr_fd.c
        srcs/ft_puttab.c
        srcs/ft_safe_alloc.c
        srcs/ft_str_is_alpha.c
        srcs/ft_str_is_lowercase.c
        srcs/ft_str_is_numeric.c
        srcs/ft_str_is_printable.c
        srcs/ft_str_is_uppercase.c
        srcs/ft_strcapitalize.c
        srcs/ft_strcasecmp.c
        srcs/ft_strcasestr.c
        srcs/ft_strcat.c
        srcs/ft_strchr.c
        srcs/ft_strclen.c
        srcs/ft_strclr.c
        srcs/ft_strcmp.c
        srcs/ft_strcpy.c
        srcs/ft_strdel.c
        srcs/ft_strdup.c
        srcs/ft_strequ.c
        srcs/ft_striter.c
        srcs/ft_striteri.c
        srcs/ft_strjoin.c
        srcs/ft_strjoinfree.c
        srcs/ft_strlcat.c
        srcs/ft_strlcpy.c
        srcs/ft_strlen.c
        srcs/ft_strlowcase.c
        srcs/ft_strmap.c
        srcs/ft_strmapi.c
        srcs/ft_strncasecmp.c
        srcs/ft_strncat.c
        srcs/ft_strncmp.c
        srcs/ft_strncpy.c
        srcs/ft_strndup.c
        srcs/ft_strnequ.c
        srcs/ft_strnew.c
        srcs/ft_strnstr.c
        srcs/ft_strpbrk.c
        srcs/ft_strrchr.c
        srcs/ft_strsplit.c
        srcs/ft_strstr.c
        srcs/ft_strsub.c
        srcs/ft_strsubfree.c
        srcs/ft_strtrim.c
        srcs/ft_strupcase.c
        srcs/ft_swap.c
        srcs/ft_swapf.c
        srcs/ft_tabdel.c
        srcs/ft_tablen.c
        srcs/ft_tolower.c
        srcs/ft_toupper.c
        srcs/ft_wordcount.c)