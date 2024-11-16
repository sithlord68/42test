# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pascal <pascal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 11:16:53 by pjolidon          #+#    #+#              #
#    Updated: 2024/10/05 12:06:55 by pascal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN		= libft
LIB		= libft.a
TST		= test/*c
TBIN	= mytest.out
SRC		= ft*c
HDR		= ft*h
SBN		= _bonus*
OBJ		= *o
CPL		= gcc
CLHDR	= *gch
LLNK    = -L. -lft
CLN     = *.out
DATE    = $(shell date --iso=hour | sed 's\+\h\' | sed 's\:\m\' | sed 's\T\_\')
GIT2ND	= second

LIBFLG	= -c -Wall -Werror -Wextra
CPLFLG	= -Wall -Werror -Wextra
DBGFLG	= -Wall -Werror -Wextra -g3
RM		= rm -f

${BIN}:
		${CPL} ${SRC} ${LIBFLG}
		ar rc ${LIB} ${OBJ}
		ranlib ${LIB}

all:	${BIN}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${BIN}
		${RM} ${LIB}
		${RM} ${TBIN}
		${RM} ${CLN}
		${RM} ${CLHDR}

re:		fclean all

test:	fclean all
		gcc ${TST} -o ${TBIN} ${LLNK} ${DBGFLG}

push:	fclean
		git add .
		git commit -m "make push ${DATE}"
		git push
		git push ${GIT2ND}

render:	fclean
		git add .
		git rm --cached test/*
		git rm --cached 2do1/*
		git rm --cached 2do2/*
		git rm --cached 2dobonus/*
		git commit -m "make render ${DATE}"
		git push
		git push ${GIT2ND}

bonus:
		${CPL} ${SRC} ${SBN} ${LIBFLG}
		ar rc ${LIB} ${OBJ}
		ranlib ${LIB}

.PHONY:	all clean fclean re test push render bonus
