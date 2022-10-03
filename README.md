# But du projet

Coder des fonctions de la bibliothèque standard c, ainsi que d'autres fonctions utiles
et en faire une bibliothèque.

# Les fonctions codés

## De la lib c

- [isalpha](tree/main/code/ft_isalpha.c)
- [isdigit](tree/main/code/ft_isdigit.c)
- [isalnum](tree/main/code/ft_isalnum.c)
- [isascii](tree/main/code/ft_isascii.c)
- [isprint](tree/main/code/ft_isprint.c)
- [strlen](tree/main/code/ft_strlen.c)
- [memset](tree/main/code/ft_memset.c)
- [bzero](tree/main/code/ft_bzero.c)
- [memcpy](tree/main/code/ft_memcpy.c)
- [memmove](tree/main/code/ft_memmove.c)
- [strlcpy](tree/main/code/ft_strlcpy.c)
- [strlcat](tree/main/code/ft_strlcat.c)
- [toupper](tree/main/code/ft_toupper.c)
- [tolower](tree/main/code/ft_tolower.c)
- [strchr](tree/main/code/ft_strchr.c)
- [strrchr](tree/main/code/ft_strrchr.c)
- [strncmp](tree/main/code/ft_strncmp.c)
- [memchr](tree/main/code/ft_memchr.c)
- [memcmp](tree/main/code/ft_memcmp.c)
- [strnstr](tree/main/code/ft_strnstr.c)
- [atoi](tree/main/code/ft_atoi.c)
- [calloc](tree/main/code/ft_calloc.c)
- [strdup](tree/main/code/ft_strdup.c)

## Fonctions supplémentaires

- [ft_substr](tree/main/code/ft_ft_substr.c)
- [ft_strjoin](tree/main/code/ft_ft_strjoin.c)
- [ft_strtrim](tree/main/code/ft_ft_strtrim.c)
- [ft_split](tree/main/code/ft_ft_split.c)
- [ft_itoa](tree/main/code/ft_ft_itoa.c)
- [ft_strmapi](tree/main/code/ft_ft_strmapi.c)
- [ft_striteri](tree/main/code/ft_ft_striteri.c)
- [ft_putchar_fd](tree/main/code/ft_ft_putchar_fd.c)
- [ft_putstr_fd](tree/main/code/ft_ft_putstr_fd.c)
- [ft_putendl_fd](tree/main/code/ft_ft_putendl_fd.c)
- [ft_putnbr_fd](tree/main/code/ft_ft_putnbr_fd.c)

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
