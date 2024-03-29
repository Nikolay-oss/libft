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
		  ${SRCDIR}ft_strnstr.c	\
		  ${SRCDIR}ft_atoi.c	\
		  ${SRCDIR}ft_putchar_fd.c	\
		  ${SRCDIR}ft_putstr_fd.c	\
		  ${SRCDIR}ft_putendl_fd.c	\
		  ${SRCDIR}ft_putnbr_fd.c	\
		  ${SRCDIR}ft_substr.c	\
		  ${SRCDIR}ft_strtrim.c	\
		  ${SRCDIR}ft_strmapi.c	\
		  ${SRCDIR}ft_itoa.c	\
		  ${SRCDIR}ft_split.c

SRC_BON		= ${SRCDIR}ft_lstnew.c	\
		  ${SRCDIR}ft_lstadd_back.c	\
		  ${SRCDIR}ft_lstadd_front.c \
		  ${SRCDIR}ft_lstclear.c \
		  ${SRCDIR}ft_lstdelone.c \
		  ${SRCDIR}ft_lstiter.c	\
		  ${SRCDIR}ft_lstlast.c	\
		  ${SRCDIR}ft_lstsize.c	\
		  ${SRCDIR}ft_lstmap.c	

OBJ     = ${patsubst ${SRCDIR}%.c, ${OBJDIR}%.o, ${SRC}}

OBJ_BON	= ${patsubst ${SRCDIR}%.c, ${OBJDIR}%.o, ${SRC_BON}}

CC      = gcc

CFLAGS  = -Wall -Wextra -Werror

GREEN	= \033[0;32m

RED	= \033[0;31m

RESET	= \033[0m

all:	transition

${OBJDIR}%.o: ${SRCDIR}%.c
	@${CC} ${CFLAGS} -I ${INC} -c $< -o $@
	@echo "$(GREEN)#$(RESET)\c"

$(OBJDIR):
	@mkdir -p $(OBJDIR)
	@echo "$(GREEN)$(OBJDIR) was created$(RESET)"
	@echo "\nCompilation. Please wait..."
	@echo "$(GREEN)|$(RESET)\c"

transition:	$(OBJDIR) $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN)|$(RESET)"
	@echo "Done!"
	@ar rcs $(NAME) $?
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

bonus:
	@make OBJ="$(OBJ) $(OBJ_BON)" all

clean:
	@rm -rf $(OBJ) $(OBJ_BON) $(OBJDIR)
	@echo "$(NAME): $(RED)$(OBJDIR) was deleted$(RESET)"
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"


fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re: fclean all
