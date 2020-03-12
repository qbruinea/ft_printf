GREEN = \033[0;32m
NC = \033[0m
YELLOW = \033[0;33m
WHITE=$'\x1b[37m'
IWHITE=\033[107;1;30m
BLACK=\033[0;30m

NAME = libftprintf.a

LIB = libft.a

HEADER = ./ft_printf.h

SRCS = ./ft_printf.c\
./convert_c.c\
./convert_nb.c\
./flags_nb.c\
./convert_percent.c\
./convert_s.c\
./ft_printf_utils.c\
./ft_printf_utils2.c\
./ft_printf_utils3.c\

OBJET = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

CFLAGS = -g -Wall -Werror -Wextra

%.o : %.c ${HEADER}
	@echo "${GREEN}[OK]${NC}	${YELLOW}Compiling :${NC}" $<
	@${CC} ${CFLAGS} -I ${HEADER}  -c $< -o $@

all: ${NAME}

$(NAME): ${LIB} ${OBJET} ${HEADER}
	@ar src ${NAME} ${OBJET}

${LIB}:
	@echo "${GREEN}-------------------------------------${NC}"
	@echo "${GREEN}--------------- LIB_FT --------------${NC}"
	@echo "${GREEN}-------------------------------------${NC}"
	@make -C libft all
	@echo "${GREEN}--------------------------------------${NC}"
	@echo "${GREEN}------------- FT_PRINTF --------------${NC}"
	@echo "${GREEN}--------------------------------------${NC}"

clean:
	@${RM} ${OBJET}
	@make -C libft clean
	@echo "Object has been supressed."

fclean: clean
	@${RM} ${NAME}
	@make -C libft fclean
	@echo "libftprintf.a has been supressed."

re:     fclean ${NAME}

.PHONY: all clean fclean re
