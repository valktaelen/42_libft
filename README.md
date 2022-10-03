# But du projet

Coder des fonctions de la bibliothèque standard c, ainsi que d'autres fonctions utiles
et en faire une bibliothèque.

# Les fonctions codés

## De la lib c

- [isalpha](blob/main/code/ft_isalpha.c)
- [isdigit](blob/main/code/ft_isdigit.c)
- [isalnum](blob/main/code/ft_isalnum.c)
- [isascii](blob/main/code/ft_isascii.c)
- [isprint](blob/main/code/ft_isprint.c)
- [strlen](blob/main/code/ft_strlen.c)
- [memset](blob/main/code/ft_memset.c)
- [bzero](blob/main/code/ft_bzero.c)
- [memcpy](blob/main/code/ft_memcpy.c)
- [memmove](blob/main/code/ft_memmove.c)
- [strlcpy](blob/main/code/ft_strlcpy.c)
- [strlcat](blob/main/code/ft_strlcat.c)
- [toupper](blob/main/code/ft_toupper.c)
- [tolower](blob/main/code/ft_tolower.c)
- [strchr](blob/main/code/ft_strchr.c)
- [strrchr](blob/main/code/ft_strrchr.c)
- [strncmp](blob/main/code/ft_strncmp.c)
- [memchr](blob/main/code/ft_memchr.c)
- [memcmp](blob/main/code/ft_memcmp.c)
- [strnstr](blob/main/code/ft_strnstr.c)
- [atoi](blob/main/code/ft_atoi.c)
- [calloc](blob/main/code/ft_calloc.c)
- [strdup](blob/main/code/ft_strdup.c)

## Fonctions supplémentaires

- [ft_substr](blob/main/code/ft_ft_substr.c)
- [ft_strjoin](blob/main/code/ft_ft_strjoin.c)
- [ft_strtrim](blob/main/code/ft_ft_strtrim.c)
- [ft_split](blob/main/code/ft_ft_split.c)
- [ft_itoa](blob/main/code/ft_ft_itoa.c)
- [ft_strmapi](blob/main/code/ft_ft_strmapi.c)
- [ft_striteri](blob/main/code/ft_ft_striteri.c)
- [ft_putchar_fd](blob/main/code/ft_ft_putchar_fd.c)
- [ft_putstr_fd](blob/main/code/ft_ft_putstr_fd.c)
- [ft_putendl_fd](blob/main/code/ft_ft_putendl_fd.c)
- [ft_putnbr_fd](blob/main/code/ft_ft_putnbr_fd.c)

# Utilisation

Remplacer dir_libft par le dossier de la libft

## Création de la librairie

```shell
make # compile lib (create libft.a)
```
ou depuis un autre dossier
```shell
make -C dir_libft
```

## Compilation avec la libft

- Inclure le header de la libft
```c
#include dir_libft/libft.h
```
- Compiler avec la libft
```shell
gcc -Ldir_libft -lft my_srcs
```


# Liens des testeurs

https://github.com/Tripouille/libftTester

https://github.com/jtoty/Libftest

https://github.com/alelievr/libft-unit-test

https://github.com/ska42/libft-war-machine
