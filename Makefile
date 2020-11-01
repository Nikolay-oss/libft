NAME    = libft.a
SRCDIR  = srcs/
INC		= includes/
OBJDIR  = objs/
SRC     = ${SRCDIR}ft_memset.c \
          ${SRCDIR}ft_bzero.c \
          ${SRCDIR}ft_memcpy.c \
          ${SRCDIR}ft_memccpy.c \
          ${SRCDIR}ft_memmove.c \
          ${SRCDIR}ft_strlen.c	\
		  ${SRCDIR}ft_tolower.c	\
		  ${SRCDIR}ft_toupper.c	\
		  ${SRCDIR}ft_strjoin.c	\
		  ${SRCDIR}ft_memchr.c	\
		  ${SRCDIR}ft_memcmp.c	\
		  ${SRCDIR}ft_isalpha.c	\
		  ${SRCDIR}ft_isdigit.c	\
		  ${SRCDIR}ft_isalnum.c	\
		  ${SRCDIR}ft_isascii.c	\
		  ${SRCDIR}ft_isprint.c	\
		  ${SRCDIR}ft_strlcpy.c	\
		  ${SRCDIR}ft_strlcat.c	\
		  ${SRCDIR}ft_strdup.c	\
		  ${SRCDIR}ft_strchr.c	\
		  ${SRCDIR}ft_strrchr.c	\
		  ${SRCDIR}ft_strncmp.c	\
		  ${SRCDIR}ft_calloc.c	\
		  ${SRCDIR}ft_strnstr.c	
OBJ     = ${patsubst ${SRCDIR}%.c, ${OBJDIR}%.o, ${SRC}}
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
${OBJDIR}%.o: ${SRCDIR}%.c
	${CC} ${CFLAGS} -I ${INC} -c $< -o $@
${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}
all:  ${NAME}
clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf ${NAME}
re: fclean all
