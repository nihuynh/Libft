# Libft
___
### Roadmap

Units test needed : 
(ID) : indirect test are made
* ft\_memrcpy(ID)
* ft\_strclen(ID)
* ft\_lstlast(ID)
* ft\_lstat
* ft\_lstaddbk(ID)
* ft\_lstrev
* ft\_strlstsplit
* ft\_min(ID)
* ft\_max(ID)
* ft\_abs(ID)
* ft\_btw(ID)
* ft\_split_tolst(need his proper c file)

functions to add :
* ft\_arraylen
* ft\_lstaddmid
* ft\_lstjoin
* ft\_atoi_base
#### to add
* categorize (IO, String, memory, math, ctype, list, convert, test)
mkdir includes && mkcd srcs && mkdir io string memory math ctype list convert
* specific header & folder

#### to remove
#### to fix
* NORME

___
### Uncommit
#### added
* .travis.yml
* Headers 42
#### fixed
* categorie into the makefile
* .travis.yml
#### removed
restrict keyword

___
### [V0.0.2] 2018-03-30
#### added
* License MIT
* logo on the readme.md + pdf in docs folder
* ft\_lstlen
* ft\_min
* ft\_max
* ft\_abs
* ft\_btw
* ft\_strlstsplit
* ft\_lstrev
* security in memalloc
#### fixed
* now on github
* change from define to function for math functions

___
### [V0.0.2] 2018-03-29
#### added
* readme.md
* ft_memrcpy.c
* ft_strclen.c
* struct t_byte
#### fixed
* make ft_atoi.c work in negative because of INT MIN case. 
* protect some fonctions
#### removed
* malloc call in ft_memmove.c (forward or bwd cpy)

---
### [V0.0.2] 2018-03-27
#### added
* folder for objects on compilation
* banner on compiling the lib
* include <stdlib.h> into sources files that require it
* ft_lstlast.c
* ft_lstat.c
* security on ft_lstdelone.c
#### removed
* std lib include in the header
* roadmap.txt

___
### [V0.0.1] 2018-03-26
#### added
* changelog.md
* ft_strcasestr.c
* security to strncmp.c
#### removed
* headers
* preprocessor WSTRIM(c)
* sizeof in ft_strnew.c
* write call in ft_putendl.c
#### fixed
* Makefile change (upgrade linker, add status when building the lib)
* ft_putnbr now call ft_putnbr\_fd
* ft_strcasecmp now call ft_strncasecmp

___
### [V0.0.1] 2018-03-24
#### added
* ft_strcasecmp.c
* ft_strncasecmp.c
* ft_strndup.c
* ft_strupcase.c
* roadmap.txt
#### fixed
* libft.h prototypes

___
### [V0.0.1] 2018-03-23
#### added
* Initial commit
