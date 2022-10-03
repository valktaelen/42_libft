# But du projet

Coder des fonctions de la bibliothèque standard c, ainsi que d'autres fonctions utiles
et en faire une bibliothèque.

# Les fonctions codés

## De la lib c

- [isalpha](code/ft_isalpha.c)
- [isdigit](code/ft_isdigit.c)
- [isalnum](code/ft_isalnum.c)
- [isascii](code/ft_isascii.c)
- [isprint](code/ft_isprint.c)
- [strlen](code/ft_strlen.c)
- [memset](code/ft_memset.c)
- [bzero](code/ft_bzero.c)
- [memcpy](code/ft_memcpy.c)
- [memmove](code/ft_memmove.c)
- [strlcpy](code/ft_strlcpy.c)
- [strlcat](code/ft_strlcat.c)
- [toupper](code/ft_toupper.c)
- [tolower](code/ft_tolower.c)
- [strchr](code/ft_strchr.c)
- [strrchr](code/ft_strrchr.c)
- [strncmp](code/ft_strncmp.c)
- [memchr](code/ft_memchr.c)
- [memcmp](code/ft_memcmp.c)
- [strnstr](code/ft_strnstr.c)
- [atoi](code/ft_atoi.c)
- [calloc](code/ft_calloc.c)
- [strdup](code/ft_strdup.c)

## Fonctions supplémentaires

- [ft_substr](code/ft_ft_substr.c)
- [ft_strjoin](code/ft_ft_strjoin.c)
- [ft_strtrim](code/ft_ft_strtrim.c)
- [ft_split](code/ft_ft_split.c)
- [ft_itoa](code/ft_ft_itoa.c)
- [ft_strmapi](code/ft_ft_strmapi.c)
- [ft_striteri](code/ft_ft_striteri.c)
- [ft_putchar_fd](code/ft_ft_putchar_fd.c)
- [ft_putstr_fd](code/ft_ft_putstr_fd.c)
- [ft_putendl_fd](code/ft_ft_putendl_fd.c)
- [ft_putnbr_fd](code/ft_ft_putnbr_fd.c)

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
